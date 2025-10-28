
extern void libip6t_LOG_init(void);
extern void libip6t_REJECT_init(void);
extern void libip6t_SNAT_init(void);
void init_extensions6(void);
void init_extensions6(void)
{
 libip6t_LOG_init();
 libip6t_REJECT_init();
 libip6t_SNAT_init();
}
