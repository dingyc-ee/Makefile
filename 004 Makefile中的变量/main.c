//
// Created by ding on 23-4-11.
//

#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"

int main(void)
{
    int a = 1;
    int b = 2;

    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", sub(a, b));
    printf("a * b = %d\n", mul(a, b));

    return 0;
}
