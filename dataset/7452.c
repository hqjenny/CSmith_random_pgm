/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7452.c
 * Seed:      4204277699
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const uint32_t g_10 = 0xCDCB363FL;
static int16_t g_11[10][10][2] = {{{(-1L),1L},{0x441AL,0x40EBL},{0L,0x4BA3L},{0x89D2L,(-7L)},{(-5L),0xA61BL},{0L,0x6C37L},{(-9L),1L},{0xD338L,0x89D2L},{0x0796L,(-1L)},{0L,0x6950L}},{{0xA4D6L,0x6C37L},{0xBC78L,0xEE4EL},{0x4BA3L,1L},{0x89D2L,0xA019L},{0x441AL,(-1L)},{0x07AFL,1L},{0xCA3EL,(-7L)},{0x4BA3L,0xC895L},{0x9519L,0xE468L},{(-9L),0x6950L}},{{1L,0x2E81L},{0x1208L,(-1L)},{0xD338L,0xD338L},{0xE468L,0xA88EL},{0xF7A9L,0x89D2L},{(-9L),(-1L)},{1L,(-9L)},{0xEE4EL,0xA019L},{0xEE4EL,(-9L)},{1L,(-1L)}},{{(-9L),0x89D2L},{0xF7A9L,0xA88EL},{0xE468L,0x40EBL},{0x40EBL,0x1208L},{1L,0x0796L},{0x5B68L,(-4L)},{0xC797L,0xA88EL},{0x07AFL,(-1L)},{0xA4D6L,(-7L)},{1L,0x8E22L}},{{1L,0x4BA3L},{0L,(-9L)},{(-7L),0x7909L},{0xA4D6L,0xCA3EL},{0xF7A9L,1L},{0x208AL,(-4L)},{0x73B2L,0x1208L},{1L,(-7L)},{0x40EBL,0x5B68L},{0xC797L,1L}},{{0x441AL,0x89D2L},{0x0635L,(-7L)},{(-7L),0xA4D6L},{0xEE4EL,(-5L)},{0L,0x8E22L},{0x1208L,(-1L)},{0x0635L,0xCA3EL},{0x07AFL,(-7L)},{0xE468L,0x5B68L},{0x73B2L,0x0796L}},{{0L,0x0796L},{0x73B2L,0x5B68L},{0xE468L,(-7L)},{0x07AFL,0xCA3EL},{0x0635L,(-1L)},{0x1208L,0x8E22L},{0L,(-5L)},{0xEE4EL,0xA4D6L},{(-7L),(-7L)},{0x0635L,0x89D2L}},{{0x441AL,1L},{0xC797L,0x5B68L},{0x40EBL,(-7L)},{1L,0x1208L},{0x73B2L,(-4L)},{0x208AL,1L},{0xF7A9L,0xCA3EL},{0xA4D6L,0x7909L},{(-7L),(-9L)},{0L,0x4BA3L}},{{1L,0x8E22L},{1L,(-7L)},{0xA4D6L,(-1L)},{0x07AFL,0xA88EL},{0xC797L,(-4L)},{0x5B68L,0x0796L},{1L,0x1208L},{0x40EBL,0x40EBL},{0xE468L,0xA88EL},{0xF7A9L,0x89D2L}},{{(-9L),(-1L)},{1L,(-9L)},{0xEE4EL,0xA019L},{0xEE4EL,(-9L)},{1L,(-1L)},{(-9L),0x89D2L},{0xF7A9L,0xA88EL},{0xE468L,0x40EBL},{0x40EBL,0x1208L},{1L,0x0796L}}};
static volatile int32_t g_13 = (-1L);/* VOLATILE GLOBAL g_13 */
static uint32_t g_14 = 0x88FED6C3L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_5(int8_t  p_6);
static int8_t  func_7(uint32_t  p_8, const int32_t  p_9);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_11 g_14
 * writes: g_11 g_14
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_2 = 0xE8EDF1FEL;
    int32_t l_12 = (-1L);
    ++l_2;
    g_11[5][7][0] ^= func_5(func_7(l_2, g_10));
    g_14++;
    return g_11[5][2][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_5(int8_t  p_6)
{ /* block id: 4 */
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : g_10
 * writes:
 */
static int8_t  func_7(uint32_t  p_8, const int32_t  p_9)
{ /* block id: 2 */
    return g_10;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 8
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

