#pragma once
#include "common.h"

struct sysret {
    int a0;
    int a1;
    int a2;
};

void putchar(char ch);
int getchar(void);
__attribute__((noreturn)) void exit(void);
