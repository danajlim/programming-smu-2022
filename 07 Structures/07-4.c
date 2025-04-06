
#include <stdio.h>
#include <stdlib.h>

void fun1(void) {
    static int static_i = 100;
    static int static_j = 200;
    printf("&static_i=%p\n", &static_i);
    printf("&static_j=%p\n", &static_j);
}

void fun2(void) {
    int stack_i = 300;
    int stack_j = 400;
    printf("&stack_i=%p\n", &stack_i);
    printf("&stack_j=%p\n", &stack_j);
}

void fun3(void) {
    int *dynamic_p;
    dynamic_p = malloc(100);
    printf("dynamic_p=%p\n", dynamic_p);
}
