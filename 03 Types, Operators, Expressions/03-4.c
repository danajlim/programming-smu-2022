
#include <stdio.h>

int main() {
    int l = 1, r = 10, m = 5;
    int i, j = 1;
    for (i = l; i <= r; i++, j++) {
        printf("%d", i);
        if (i == r)
            break;
        j % m == 0 ? printf("\n") : printf(",");
    }
    printf("\n");
    return 0;
}
