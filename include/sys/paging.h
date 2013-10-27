
void init_paging(uint64_t, uint64_t, uint64_t);
void map_virt_phys_addr(uint64_t,uint64_t,uint64_t);

uint64_t* alloc_pte(uint64_t *pde_table,int pde_off);
uint64_t* alloc_pde(uint64_t *pdpe_table,int pdpe_off);
uint64_t* alloc_pdpe(uint64_t *pml4_table,int pml4_off);

void set_pml4_t(uint64_t *addr);
uint64_t* get_pml4_t();
uint64_t* get_ker_pml4_t();
