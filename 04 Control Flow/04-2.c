
#include <stdio.h>

int main() {
    int c = 0, f;
    while (c <= 50) {
        f =  c * (9.0 / 5.0 ) + 32;
        printf("C = %d , F = %d\n", c, f);
        c = c + 10;
    }
    return 0;
}
