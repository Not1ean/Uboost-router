#!/bin/bash

SCRIPT_VERSION="1.1"
CONFIG_1800="config-uboost-1800"
CONFIG_3000="config-uboost-3000"

# Function to detect current target
get_current_target() {
    if [ ! -f ".config" ]; then
        echo "none"
        return
    fi
    
    if grep -q "CONFIG_TARGET_ramips_mt7621_DEVICE_haier_har-20s2u1=y" ".config"; then
        echo "1800"
    elif grep -q "CONFIG_TARGET_mediatek_filogic_DEVICE_uboost-3000=y" ".config"; then
        echo "3000"
    else
        echo "unknown"
    fi
}

# Function to get version status
get_version_status() {
    local current_target=$(get_current_target)
    
    echo "Current active target: $current_target"
    echo ""
    echo "Available configurations:"
    
    # Check 1800
    if [ -f "$CONFIG_1800" ]; then
        if [ "$current_target" = "1800" ]; then
            echo "  Uboost-1800: ✅ ACTIVE"
        else
            echo "  Uboost-1800: ❌ INACTIVE"
        fi
    else
        echo "  Uboost-1800: 📁 MISSING"
    fi
    
    # Check 3000
    if [ -f "$CONFIG_3000" ]; then
        if [ "$current_target" = "3000" ]; then
            echo "  Uboost-3000: ✅ ACTIVE"
        else
            echo "  Uboost-3000: ❌ INACTIVE"
        fi
    else
        echo "  Uboost-3000: 📁 MISSING"
    fi
}

# Function to switch config
switch_config() {
    local target_config=$1
    local device_name=$2
    local target_key=$3
    
    if [ ! -f "$target_config" ]; then
        echo "Error: Config file $target_config not found!"
        exit 1
    fi
    
    cp "$target_config" ".config"
    echo "✅ Switched to $device_name configuration"
    echo "💡 Run 'make defconfig' to update dependencies if needed"
}

# Main script
case "$1" in
    "--1800"|"-1")
        switch_config "$CONFIG_1800" "Uboost-1800" "ramips_mt7621_DEVICE_haier_har-20s2u1"
        ;;
        
    "--3000"|"-3") 
        switch_config "$CONFIG_3000" "Uboost-3000" "mediatek_filogic_DEVICE_uboost-3000"
        ;;
        
    "--version"|"-v")
        echo "Uboost Config Switcher v$SCRIPT_VERSION"
        echo "========================================"
        get_version_status
        ;;
        
    "--help"|"-h"|"")
        echo "Uboost Config Switcher v$SCRIPT_VERSION"
        echo ""
        echo "Usage: $0 [OPTION]"
        echo ""
        echo "Options:"
        echo "  --1800, -1     Switch to Uboost-1800 configuration"
        echo "  --3000, -3     Switch to Uboost-3000 configuration" 
        echo "  --version, -v  Show version and config status"
        echo "  --help, -h     Show this help message"
        echo ""
        echo "Examples:"
        echo "  $0 --1800      # Switch to 1800 series"
        echo "  $0 --3000      # Switch to 3000 series"
        echo "  $0 --version   # Check current status"
        ;;
        
    *)
        echo "Error: Unknown option '$1'"
        echo "Use '$0 --help' for usage information"
        exit 1
        ;;
esac
