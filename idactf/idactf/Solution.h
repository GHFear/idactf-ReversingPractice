#pragma once
#include <iostream>
#include <intrin.h>
#include <Windows.h>

void First_Key()
{
    const char key[] = "Head to the library";
    if (!memcmp("Head to the library", key, 19))
    {
        printf("First Key: %s\n", key);
    }
    printf("Wrong Key!\n");
}

void Second_Key()
{
    uint8_t y[] = { 0x44, 0x36, 0x63, 0xC8, 0x1C, 0x28, 0x84, 0xA0, 0x8D, 0x3A, 0x2F, 0x39, 0xF7, 0xEE, 0x92, 0x4F,
                          0xA7, 0xD5, 0xD3, 0x6C, 0x81, 0x8C, 0x4F, 0xCD, 0x37, 0x17, 0x89, 0xFC, 0xF9 };
    // xmmword_403420 
    // + 13 bytes from xmmword_403430

    uint8_t results[] = { 0x07, 0x5E, 0x06, 0xAB, 0x77, 0x08, 0xE6, 0xCF, 0xE2, 0x51, 0x5C, 0x19, 0x98, 0x80, 0xB2, 0x3B,
                          0xCF, 0xB0, 0xF3, 0x02, 0xE4, 0xF4, 0x3B, 0xED,
                          0x44, 0x7F, 0xEC, 0x90,
                          0x9F };
    // xmmword_403440 
    // + var_138 = 0xED3BF4E402F3B0CFLL 
    // + var_130 = 0x90EC7F44 
    // + var_12C = 0x9F;

    size_t key_size = sizeof(results);
    char* key = (char*)malloc(key_size + 1);

    if (key != NULL) {
        for (size_t i = 0; i < key_size; i++) {
            uint8_t x = results[i] ^ y[i];
            key[i] = (char)x;
        }
        key[key_size] = '\0';
        printf("Second Key Converted string: %s\n", key);
        free(key);
    }
    else {
        printf("Memory allocation failed.\n");
    }
}

void Third_Key()
{
    uint8_t v0 = 98 - 15;
    uint8_t v1 = 94 ^ 0x3B;
    uint8_t v2 = 154 - 57;
    uint8_t v3 = 74 ^ 0x38;
    uint8_t v4 = 23 ^ 0x74;
    uint8_t v5 = 83 ^ 0x3B;
    uint8_t v6 = 35 - 3;
    uint8_t v7 = 49 + 67;
    uint8_t v8 = 113 - 9;
    uint8_t v9 = 113 - 12;
    uint8_t v10 = 122 - 90;
    uint8_t v11 = 82 + 16;
    uint8_t v12 = 234 - 123;
    uint8_t v13 = 70 ^ 0x29;
    uint16_t v14 = 236 + 127;
    uint8_t v15 = 34 ^ 2;
    uint8_t v16 = 186 - 84;
    uint8_t v17 = 223 ^ 0xB0;
    uint8_t v18 = 216 - 102;
    uint16_t v19 = 179 + 109;
    uint8_t v20 = 67 ^ 0x20;
    uint8_t v21 = 219 - 111;
    uint8_t v22 = 141 - 24;
    uint8_t v23 = 110 - 9;
    uint8_t v24 = 163 - 48;
    uint16_t v25 = 237 + 19;
    uint16_t v26 = 195 + 61;
    uint16_t v27 = 147 + 109;
    uint16_t v28 = 138 + 118;
    uint8_t v29 = 126 - 126;
    uint8_t v30 = 42 - 42;
    uint8_t v31 = 92 ^ 0x5C;
    const char key[] = { v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,v19,v20,v21,v22,v23,v24,v25,v26,v27,v28,v29,v30,v31, 0 };

    printf("Third Key: %s\n", key);
}

void Fourth_Key()
{
    // The 4 Clues are [ 01000010 00110111 10110010 00000101 ]
    unsigned const char clues[] = { 0b01000010 ,0b00110111, 0b10110010, 0b00000101 };

    //printf("Fourth Key Converted string: %s\n", unknown);  
}