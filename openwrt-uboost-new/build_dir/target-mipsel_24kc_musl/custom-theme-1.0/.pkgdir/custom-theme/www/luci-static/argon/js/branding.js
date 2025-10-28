// UBoost Branding - Replace OpenWRT text
document.addEventListener('DOMContentLoaded', function() {
    function replaceText() {
        // Replace in page title
        if (document.title.includes('OpenWRT') || document.title.includes('OpenWrt')) {
            document.title = document.title.replace(/OpenWRT/gi, 'UBoost').replace(/OpenWrt/gi, 'UBoost');
        }

        // Replace in headers and text content
        const walker = document.createTreeWalker(
            document.body,
            NodeFilter.SHOW_TEXT,
            null,
            false
        );

        let node;
        const replacements = [
            { from: /OpenWRT/gi, to: 'UBoost' },
            { from: /OpenWrt/gi, to: 'UBoost' },
            { from: /openwrt\.org/gi, to: 'uboost.com' },
            { from: /OpenWrt Project/gi, to: 'UBoost Team' }
        ];

        while (node = walker.nextNode()) {
            let text = node.nodeValue;
            replacements.forEach(rep => {
                text = text.replace(rep.from, rep.to);
            });
            if (text !== node.nodeValue) {
                node.nodeValue = text;
            }
        }

        // Replace in specific elements
        const elements = document.querySelectorAll('*');
        elements.forEach(el => {
            // Replace in alt text
            if (el.alt) {
                el.alt = el.alt.replace(/OpenWRT/gi, 'UBoost').replace(/OpenWrt/gi, 'UBoost');
            }

            // Replace in title attributes
            if (el.title) {
                el.title = el.title.replace(/OpenWRT/gi, 'UBoost').replace(/OpenWrt/gi, 'UBoost');
            }

            // Replace in placeholder
            if (el.placeholder) {
                el.placeholder = el.placeholder.replace(/OpenWRT/gi, 'UBoost').replace(/OpenWrt/gi, 'UBoost');
            }
        });

        // Replace favicon
        const oldFavicon = document.querySelector('link[rel="icon"][href*="openwrt"]') || 
                          document.querySelector('link[rel="shortcut icon"]');
        if (oldFavicon) {
            oldFavicon.href = '/luci-static/argon/favicon.ico';
        }

        let favicon = document.querySelector('link[rel="icon"]');
        if (!favicon) {
            favicon = document.createElement('link');
            favicon.rel = 'icon';
            favicon.type = 'image/x-icon';
            document.head.appendChild(favicon);
        }
        favicon.href = '/luci-static/argon/favicon.ico';
    }
    
    // Run on load
    replaceText();
    
    // Run on dynamic content changes (for SPA navigation)
    const observer = new MutationObserver(function(mutations) {
        mutations.forEach(function(mutation) {
            if (mutation.addedNodes.length) {
                replaceText();
            }
        });
    });
    
    observer.observe(document.body, {
        childList: true,
        subtree: true
    });
});
