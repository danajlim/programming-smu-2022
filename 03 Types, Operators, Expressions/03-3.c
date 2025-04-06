
#include <stdio.h>

int main() {
    unsigned int word = 0xFFFF;
    unsigned int mask = 0x00FF;
    unsigned int result = word & (~mask);
    printf("Masked result: %X\n", result);
    return 0;
}
