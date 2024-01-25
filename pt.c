#include "os.h"

/* MACROS */

#define BASE_BIT (12)
#define SYMBOL_SIZE (9)

/* Declarations */
void page_table_update(uint64_t pt, uint64_t vpn, uint64_t ppn);
uint64_t page_table_query(uint64_t pt, uint64_t vpn);

/* Data Structures */


/* Definitions */

// uint16_t get_son_pointer(uint64_t vpn, uint8_t curr_base_bit_i)
// {
//     return (vpn >> curr_base_bit_i) & 0x1FF;
// }

uint64_t page_table_query(uint64_t pt, uint64_t vpn)
{
    return 0;
}

void page_table_update(uint64_t pt, uint64_t vpn, uint64_t ppn)
{
    int depth;
    int son_p;
    void *root_va = phys_to_virt(pt);
    int curr_base_bit_i = BASE_BIT;

    for (depth = 0; depth < 5; depth++)
    {
        // son_p = get_son_pointer(vpn, curr_base_bit_i);
        if (1)
        {
            /* code */
        }
        curr_base_bit_i += SYMBOL_SIZE;
    }

}
