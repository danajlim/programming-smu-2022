
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char *name;
    int number;
    char major;
    struct student *link;
} STUDENT;

int main(void) {
    STUDENT s[10];
    int i;
    printf("sizeof(struct student)=%lu\n", sizeof(struct student));
    printf("sizeof(s)=%lu\n", sizeof(s));

    for (i = 0; i < 10; i++) {
        printf("&s[%d]=%p\n", i, &s[i]);
    }

    printf("&s[1]-&s[0]=%ld\n", &s[1] - &s[0]);
    return EXIT_SUCCESS;
}
