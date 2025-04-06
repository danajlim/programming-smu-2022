#include <stdio.h>

#define ARRAY_SIZE 5

int array[ARRAY_SIZE];
int current = -1;

void print_array(void) {
    int i;
    printf("(");
    for (i = 0; i <= current; i++)
        printf("%d%s", array[i], i == current ? "" : ",");
    printf(")\n");
}

int add_array(int item) {
    if (current == ARRAY_SIZE - 1)
        return -1;
    current = current + 1;
    array[current] = item;
    return item;
}

int delete_array(void) {
    int item;
    if (current == -1)
        return -1;
    item = array[current];
    current = current - 1;
    return item;
}

int main(void) {
    int i;
    for (i = 0; i < ARRAY_SIZE + 1; i++) {
        printf("add_array(%d)=%d: ", i, add_array(i));
        print_array();
    }
    for (i = 0; i < ARRAY_SIZE + 1; i++) {
        printf("delete_array()=%d: ", delete_array());
        print_array();
    }
    return 0;
}