/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 231.c
 * Seed:      3625127333
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2[4][8] = {{5UL,0x6DA5043CL,0x6DA5043CL,5UL,0xB871C7BFL,0x92443250L,0xB871C7BFL,5UL},{0x6DA5043CL,0xB871C7BFL,0x6DA5043CL,0xB51DBA33L,4UL,4UL,0xB51DBA33L,0x6DA5043CL},{0xB871C7BFL,0xB871C7BFL,4UL,0x92443250L,0x74BF90EDL,0x92443250L,4UL,0xB871C7BFL},{0xB871C7BFL,0x6DA5043CL,0xB51DBA33L,4UL,4UL,0xB51DBA33L,0x6DA5043CL,0xB871C7BFL}};
static int32_t g_3 = 6L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_2 g_3
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    g_2[0][2] = 0x4A6847DFL;
    for (g_3 = 27; (g_3 != 10); g_3 = safe_sub_func_int32_t_s_s(g_3, 3))
    { /* block id: 4 */
        return g_3;
    }
    return g_2[3][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/
