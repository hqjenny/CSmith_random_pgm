/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 18043.c
 * Seed:      3367813958
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_4[8][2][5] = {{{0x89L,0x74L,(-8L),0x81L,(-4L)},{0x88L,0xB5L,(-8L),0x57L,(-1L)}},{{(-4L),(-10L),0x2FL,0x57L,0x57L},{0xC7L,(-1L),0xC7L,0x81L,(-5L)}},{{(-1L),(-1L),0x89L,7L,0x8CL},{0x74L,0x88L,0x7CL,0x74L,0x57L}},{{(-8L),0x74L,0x89L,0x8CL,(-10L)},{(-4L),0x89L,0xC7L,(-4L),(-8L)}},{{0x74L,7L,0x2FL,(-5L),0x88L},{4L,(-8L),0x7CL,0x7CL,(-8L)}},{{1L,0x01L,0x2FL,(-8L),0L},{0x4AL,0xB5L,(-1L),0x89L,4L}},{{0L,0x81L,0x7CL,0L,(-8L)},{0x4AL,(-2L),0xBFL,1L,0L}},{{1L,0x8CL,7L,0x89L,(-1L)},{0xBFL,(-8L),0x01L,0xACL,(-1L)}}};
static const int16_t g_5[2] = {(-1L),(-1L)};
static int8_t g_6 = 0L;
static int32_t g_11 = (-2L);
static int16_t g_39 = (-1L);
static int8_t g_40 = 0x77L;
static uint16_t g_41 = 0x5AB2L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int8_t  func_13(int16_t  p_14, int16_t  p_15, int32_t  p_16, uint32_t  p_17);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_11 g_41 g_40
 * writes: g_6 g_41
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_12 = 0L;
    int8_t l_47[5];
    int32_t l_48 = 1L;
    int i;
    for (i = 0; i < 5; i++)
        l_47[i] = (-1L);
    l_48 ^= ((safe_add_func_int8_t_s_s(g_4[4][1][1], g_5[0])) ^ (((g_6 = g_5[0]) ^ (((safe_div_func_uint8_t_u_u(g_5[0], g_5[0])) || (safe_rshift_func_int8_t_s_s(0xFEL, (g_11 , (((l_12 | (func_13((safe_sub_func_uint32_t_u_u(l_12, g_11)), g_5[0], g_5[0], l_12) <= g_40)) != g_40) , g_5[0]))))) && l_12)) < l_47[3]));
    return g_5[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_5 g_41
 * writes: g_41
 */
static int8_t  func_13(int16_t  p_14, int16_t  p_15, int32_t  p_16, uint32_t  p_17)
{ /* block id: 2 */
    uint8_t l_36[7] = {0UL,0UL,0x62L,0UL,0UL,0x62L,0UL};
    const int8_t l_37 = (-2L);
    int32_t l_38[4] = {(-5L),(-5L),(-5L),(-5L)};
    uint32_t l_44 = 0x8F643D9DL;
    int i;
    l_38[3] = (safe_sub_func_int8_t_s_s((((-1L) && (p_16 | (safe_sub_func_int16_t_s_s((p_14 = ((((safe_rshift_func_uint16_t_u_u(p_15, 11)) , (0xB5009892L | (safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((0x904EL || (safe_lshift_func_int8_t_s_u(0xA3L, (safe_add_func_int32_t_s_s((p_17 | ((l_36[2] || (l_37 < l_36[6])) <= 0xE69AL)), 0L))))) == p_16) | 0UL) , p_17), l_37)) <= (-4L)) == l_37), l_36[2])) , g_5[0]) | l_36[3]), l_36[2])))) || 0xE987L) , p_15)), p_16)))) < 0xFD23L), p_16));
    g_41++;
    l_44--;
    l_38[2] = p_15;
    return p_15;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 14
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

XXX max expression depth: 29
breakdown:
   depth: 1, occurrence: 10
   depth: 20, occurrence: 1
   depth: 29, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 36
XXX times a non-volatile is write: 7
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 97.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 7

XXX percentage a fresh-made variable is used: 20.6
XXX percentage an existing variable is used: 79.4
********************* end of statistics **********************/

