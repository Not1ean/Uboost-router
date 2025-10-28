
extern void libipt_LOG_init(void);
extern void libipt_REJECT_init(void);
extern void libipt_SNAT_init(void);
extern void libipt_icmp_init(void);
void init_extensions4(void);
void init_extensions4(void)
{
 libipt_LOG_init();
 libipt_REJECT_init();
 libipt_SNAT_init();
 libipt_icmp_init();
}
