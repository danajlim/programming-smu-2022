#include "03-2.h"

extern int current;
extern int array[];

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