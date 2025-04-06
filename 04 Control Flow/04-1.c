
#include <stdio.h>

int main() {
    int c, f;
    for (c = 0; c <= 50; c = c + 10) {
        f =  c * (9.0 / 5.0 ) + 32;
        printf("C = %d , F = %d\n", c, f);
    }
    return 0;
}
