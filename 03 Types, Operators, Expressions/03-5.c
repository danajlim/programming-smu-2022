
#include <stdio.h>

int main() {
    unsigned int n = 1234;
    int i;
    for (i = 31; i >= 0; i--) {
        ((n >> i) & 0x01) ? printf("1") : printf("0");
    }
    printf("\n");
    return 0;
}
