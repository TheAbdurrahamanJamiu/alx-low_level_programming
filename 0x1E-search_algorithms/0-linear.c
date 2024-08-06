#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing with array[%zu]: %d\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 30;
    int index = linear_search(array, size, value);

    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in array\n", value);
    }

    return 0;
}
