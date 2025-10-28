extern void ipset_bitmap_ip_init(void);
extern void ipset_bitmap_ipmac_init(void);
extern void ipset_bitmap_port_init(void);
extern void ipset_hash_ip_init(void);
extern void ipset_hash_ipport_init(void);
extern void ipset_hash_ipmark_init(void);
extern void ipset_hash_ipportip_init(void);
extern void ipset_hash_ipportnet_init(void);
extern void ipset_hash_net_init(void);
extern void ipset_hash_netnet_init(void);
extern void ipset_hash_netportnet_init(void);
extern void ipset_hash_netport_init(void);
extern void ipset_hash_netiface_init(void);
extern void ipset_hash_ipmac_init(void);
extern void ipset_hash_mac_init(void);
extern void ipset_list_set_init(void);
void ipset_types_init(void);
void ipset_types_init(void)
{
	ipset_bitmap_ip_init();
	ipset_bitmap_ipmac_init();
	ipset_bitmap_port_init();
	ipset_hash_ip_init();
	ipset_hash_ipport_init();
	ipset_hash_ipmark_init();
	ipset_hash_ipportip_init();
	ipset_hash_ipportnet_init();
	ipset_hash_net_init();
	ipset_hash_netnet_init();
	ipset_hash_netportnet_init();
	ipset_hash_netport_init();
	ipset_hash_netiface_init();
	ipset_hash_ipmac_init();
	ipset_hash_mac_init();
	ipset_list_set_init();
}
