/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4086.c
 * Seed:      242789366
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const uint16_t g_10[10][3] = {{1UL,0xC25FL,65529UL},{0x9892L,0xC25FL,0x9892L},{9UL,0x9FB3L,65529UL},{9UL,65535UL,1UL},{0x9892L,0x9FB3L,1UL},{1UL,0xC25FL,65529UL},{0x9892L,0xC25FL,0x9892L},{9UL,0x9FB3L,65529UL},{9UL,65535UL,1UL},{0x9892L,0x9FB3L,1UL}};
static uint32_t g_29 = 4294967286UL;
static int32_t g_30 = 0xEA3D8810L;
static uint32_t g_45 = 0xA870C387L;
static uint16_t g_48[10] = {0x8DB0L,0UL,0x6C86L,0x6C86L,0UL,0x8DB0L,0UL,0x6C86L,0x6C86L,0UL};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int16_t  func_8(const uint16_t  p_9);
static int8_t  func_18(uint32_t  p_19, const uint32_t  p_20, int32_t  p_21, uint8_t  p_22);
static int16_t  func_41(int32_t  p_42, int32_t  p_43);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_29 g_30 g_48
 * writes: g_29 g_30 g_45 g_48
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_32 = 1UL;
    int8_t l_46 = 0xD7L;
    int32_t l_47 = 0xF9752EE8L;
    g_48[8] ^= ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_32 ^= (safe_rshift_func_int16_t_s_u(func_8(g_10[2][2]), 8))) && ((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(l_32, (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_47 |= (2L & ((func_41(g_30, l_32) && (l_32 , g_10[2][1])) >= l_46))) & g_29), g_30)), 0x0AL)))) <= l_46), 4)) & l_46)), 0xC0D3L)), g_10[6][2])) >= 6L) <= g_10[9][0]) , l_32);
    return l_47;
}


/* ------------------------------------------ */
/* 
 * reads : g_10 g_29 g_30
 * writes: g_29 g_30
 */
static int16_t  func_8(const uint16_t  p_9)
{ /* block id: 1 */
    uint16_t l_11 = 0x026DL;
    int16_t l_15 = 0xCC25L;
    if (l_11)
    { /* block id: 2 */
        uint32_t l_12[9] = {0x72D714F9L,0x72D714F9L,0xA32FD2D1L,0x72D714F9L,0x72D714F9L,0xA32FD2D1L,0x4E665969L,0x4E665969L,0x72D714F9L};
        int i;
        l_12[2] &= g_10[2][2];
    }
    else
    { /* block id: 4 */
        uint32_t l_23 = 1UL;
lbl_31:
        g_29 ^= ((((g_10[2][2] ^ (l_15 <= (-8L))) , (safe_add_func_int8_t_s_s(p_9, ((func_18(p_9, l_15, l_23, (((safe_lshift_func_int8_t_s_u((!l_23), (safe_sub_func_uint8_t_u_u(g_10[2][2], g_10[0][0])))) < p_9) , l_23)) && g_10[2][2]) || 3UL)))) , p_9) || 0L);
        g_30 = l_23;
        if (l_23)
            goto lbl_31;
    }
    return g_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int8_t  func_18(uint32_t  p_19, const uint32_t  p_20, int32_t  p_21, uint8_t  p_22)
{ /* block id: 5 */
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_45
 */
static int16_t  func_41(int32_t  p_42, int32_t  p_43)
{ /* block id: 13 */
    int32_t l_44 = 1L;
    g_45 = l_44;
    return l_44;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 13
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

XXX max expression depth: 24
breakdown:
   depth: 1, occurrence: 14
   depth: 17, occurrence: 1
   depth: 24, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 35
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 11
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 31
XXX percentage an existing variable is used: 69
********************* end of statistics **********************/

