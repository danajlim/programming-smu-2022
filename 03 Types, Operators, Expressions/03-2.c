
#include <stdio.h>

int main() {
    unsigned int word = 0xA5A5A5A5;
    int n = 3;
    int bit = (word >> n) & 0x01;
    printf("bit[%d] = %d\n", n, bit);
    return 0;
}
