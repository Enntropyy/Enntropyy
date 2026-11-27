#include <stdio.h>

void max_heap_insert(int a[], int size, int key) {
    int i, tmp;

    size = size + 1;
    a[size] = key;

    i = size;
    while (i > 1 && a[i / 2] < a[i]) {
        tmp = a[i / 2];
        a[i / 2] = a[i];
        a[i] = tmp;
        i = i / 2;
    }
}

int heap_extract_max(int a[], int size) {
    if (size < 1) {
      printf("heap underflow\n");
      
      return -1;
    }

    int max = a[1];
    a[1] = a[size];
    max_heapify(a, size-1, 1);
    return max;
}