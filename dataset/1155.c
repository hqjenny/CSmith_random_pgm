/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 1155.c
 * Seed:      4208755505
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_2[4] = {0x4EL,0x4EL,0x4EL,0x4EL};
static volatile int32_t g_5 = 0xAD95E17CL;/* VOLATILE GLOBAL g_5 */
static int32_t g_6 = 0x29BF3901L;
static int32_t g_14 = 0x8753E1E0L;
static uint32_t g_42 = 0x76E8D2CAL;
static int32_t g_44[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
static int32_t g_45 = 0L;


/* --- FORWARD DECLARATIONS --- */
static const int16_t  func_1(void);
static const uint8_t  func_12(uint32_t  p_13);
static int8_t  func_20(int8_t  p_21, int16_t  p_22, const uint32_t  p_23);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_5 g_45 g_42
 * writes: g_2 g_6 g_14 g_5 g_42 g_44 g_45
 */
static const int16_t  func_1(void)
{ /* block id: 0 */
    int32_t l_17 = 0x42206DD2L;
    ++g_2[0];
    for (g_6 = 3; (g_6 >= 0); g_6 -= 1)
    { /* block id: 4 */
        int32_t l_9 = 0xE9BF9F36L;
        int i;
        l_9 = ((g_2[g_6] && (0x43L != g_2[g_6])) > g_2[0]);
        g_45 ^= ((g_14 = (safe_lshift_func_uint8_t_u_s(func_12(((-7L) | 0L)), g_2[1]))) ^ ((g_2[2] , (g_44[0][1] = ((safe_add_func_int8_t_s_s(g_5, l_17)) , (safe_mul_func_int8_t_s_s(func_12((g_2[0] != (func_20(g_2[g_6], l_9, g_2[0]) & l_17))), l_17))))) == g_2[0]));
        l_17 = (safe_lshift_func_uint8_t_u_s(l_17, g_2[g_6]));
        l_17 = g_2[g_6];
    }
    return g_42;
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static const uint8_t  func_12(uint32_t  p_13)
{ /* block id: 6 */
    return g_2[1];
}


/* ------------------------------------------ */
/* 
 * reads : g_5 g_6 g_2
 * writes: g_5 g_42
 */
static int8_t  func_20(int8_t  p_21, int16_t  p_22, const uint32_t  p_23)
{ /* block id: 9 */
    const uint32_t l_26[8] = {0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L,0x3F36A5B5L};
    uint8_t l_31[4][1][2] = {{{0x56L,0x56L}},{{0x56L,0x56L}},{{0x56L,0x56L}},{{0x56L,0x56L}}};
    int32_t l_36 = (-3L);
    int32_t l_41 = 0x393131ECL;
    int i, j, k;
    g_5 = 0x886A6C65L;
    for (p_22 = 0; (p_22 > (-2)); p_22--)
    { /* block id: 13 */
        if (l_26[2])
            break;
    }
    for (p_21 = (-26); (p_21 < (-21)); p_21 = safe_add_func_int8_t_s_s(p_21, 4))
    { /* block id: 18 */
        uint32_t l_29 = 4294967286UL;
        const int8_t l_39 = 0x31L;
        int32_t l_40 = 1L;
        int32_t l_43 = 0x16744FA7L;
        l_29 |= (-1L);
        g_5 ^= l_29;
        l_43 ^= (g_42 = ((0xCB09L ^ (g_5 ^ (+func_12((((l_31[0][0][1] > (0x494FB389L == func_12((safe_div_func_uint8_t_u_u(g_6, ((safe_mul_func_int32_t_s_s((l_36 |= p_22), ((l_41 = (l_40 &= (safe_mod_func_uint8_t_u_u(l_39, p_23)))) < g_6))) , 0x36L)))))) , l_26[0]) != l_29))))) && g_2[1]));
    }
    return l_31[0][0][1];
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 15
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

XXX max expression depth: 19
breakdown:
   depth: 1, occurrence: 18
   depth: 2, occurrence: 4
   depth: 4, occurrence: 1
   depth: 18, occurrence: 1
   depth: 19, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 33
XXX times a non-volatile is write: 16
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 15
XXX percentage of non-volatile access: 92.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 16
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 8

XXX percentage a fresh-made variable is used: 31.2
XXX percentage an existing variable is used: 68.8
********************* end of statistics **********************/

