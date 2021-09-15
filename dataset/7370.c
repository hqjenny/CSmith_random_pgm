/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7370.c
 * Seed:      2904563933
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_7[3] = {0xF55E00FEL,0xF55E00FEL,0xF55E00FEL};
static uint32_t g_8[7] = {0x869EC427L,0x869EC427L,0x869EC427L,0x869EC427L,0x869EC427L,0x869EC427L,0x869EC427L};
static volatile int16_t g_10 = 0xFD1FL;/* VOLATILE GLOBAL g_10 */
static volatile int8_t g_15[3][5] = {{7L,0x06L,5L,0x60L,0x60L},{0x06L,7L,0x06L,5L,0x60L},{0x22L,0L,0x60L,0L,0x22L}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_11(int8_t  p_12, uint32_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8 g_10
 * writes: g_10 g_15
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_6 = 6UL;
    int32_t l_9 = 0xA1FA147BL;
    l_9 = (safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_6, g_7[0])) <= 1L), g_8[2]));
    g_10 ^= 1L;
    l_9 = func_11(g_8[5], g_7[2]);
    g_15[0][4] = (l_9 , ((func_11(g_7[0], g_8[2]) >= l_9) , 0xDF7E4414L));
    return g_7[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_11(int8_t  p_12, uint32_t  p_13)
{ /* block id: 3 */
    int8_t l_14 = 0x8CL;
    return l_14;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 7
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 2
XXX times a volatile is read: 4
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 46.7
XXX percentage an existing variable is used: 53.3
********************* end of statistics **********************/

