#include <stdio.h>
#include <stdlib.h>

void max_heapify(int*, int, int);
void build_max_heap(int*, int);
void heap_sort(int*, int);

void print_array(int*, int);
void swap(int*, int*);
void set_random_array(int*, int);

int main(void) {
  
  int a[] = {0, 4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

  int n = sizeof(a)/sizeof(int);

  //set_random_array(a, n);

  print_array(a, n);

  printf("Initial-\n"); print_array(a, n);
  heap_sort(a, n);
  printf("\nFinal- \n"); print_array(a, n);

  return 0;
}

void heap_sort(int* a, int n) {

  printf("\nBuild a max heap\n");
  build_max_heap(a, n);

  printf("\nHeap Sorting...\n");

  for (int j=n-1; j>1; j--) {
    swap(&a[1], &a[j]);
    max_heapify(a, j, 1); // Second term : Number of elements including root
    print_array(a, n);
  }
}

void build_max_heap(int* a, int n) {
  int arrSize = n-1;

  for(int j = arrSize/2; j >0; j--) {
    max_heapify(a, n, j);
    print_array(a, n);
  }
  return ;
}

void max_heapify(int *a, int n, int i) {

  int k;
  int arrSize = n-1;
  if(2*i > arrSize) return; // 0개
  else if(2*i == arrSize) { // 1개
    k = 2*i;
    if(a[i] >= a[k]) return;
    else swap(&a[i], &a[k]);
  }
  else{ // 2개

    if(a[2*i] >= a[2*i+1]) k=2*i;
    else k = 2*i + 1;

    if(a[i] >= a[k]) return;
    else swap(&a[i], &a[k]);
    max_heapify(a, n, k);  
  }
}

void set_random_array(int* a, int n) {
  for(int i = 1; i<n; i++) {
    a[i] = rand() % 100;
  }
  return;
}

void print_array(int* arr, int n) {

  for(int i=1; i<n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}