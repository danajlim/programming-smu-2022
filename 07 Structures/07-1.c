
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char *name;
    int number;
    char major;
    struct student *link;
} STUDENT;

void init_student(STUDENT *s, char *name, int number, char major) {
    s->name = name;
    s->number = number;
    s->major = major;
}

void print_student(STUDENT *s) {
    printf("name=%s, number=%d, major=%d\n", s->name, s->number, s->major);
}
