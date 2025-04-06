
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char *name;
    int number;
    char major;
    struct student *link;
} STUDENT;

STUDENT *alloc_student(int size) {
    return malloc(size);
}

void init_student(STUDENT *s, char *name, int number, char major) {
    s->name = name;
    s->number = number;
    s->major = major;
}

void print_student(STUDENT *s) {
    printf("name=%s, number=%d, major=%d\n", s->name, s->number, s->major);
}

void link_student(STUDENT *s1, STUDENT *s2) {
    s1->link = s2;
}

void free_student(STUDENT *s) {
    free(s);
}

void print_all_student(STUDENT *s) {
    print_student(s);
    print_student(s->link);
    print_student(s->link->link);
}
