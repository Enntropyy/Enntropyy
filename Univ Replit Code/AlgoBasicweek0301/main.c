#include <stdio.h>

void swap(int*, int*);

void print_array(int*, int);

void selection_sort(int*, int);
void bubble_sort(int*, int);
void insertion_sort(int*, int);

int main(void) {
  int n = 10;
  int a[] = {-67, 5, 11, 0, 2, 47, -22, 4, 63, 100};

  printf("Initial-\n"); print_array(a, n);

  // printf("\nSelection Sort...... \n"); selection_sort(a, n); // 선택정렬
  // printf("\nBubble Sort...... \n"); bubble_sort(a, n); // 버블정렬
  printf("\nInsertion Sort...... \n"); insertion_sort(a, n); // 삽입정렬

  printf("\nfinal: \n");  print_array(a, n);

  return 0;

}

void selection_sort(int* a, int n) {

  for(int i = 0; i < n-1; i++) {
    swap(&a[find_min(a, n-i, 1)], &a[n-1-i]);

    print_array(a, n);
  }

  return;
}


void bubble_sort(int* a, int n) {
  //outer-loop
  for(int i = 0; i < n-1; i++) {
    //inner-loop
    for(int j = 0; j < n-1-i ; j++) {
      //comparison swap
      if(a[j] < a[j+1]){
        swap(&a[j], &a[j+1]);
      }
      else;
      
      print_array(a, n);
    }
  }
  return;
}

void insertion_sort(int* a, int n) {
  int i;
  int j;
  int key; // temp

  for(i=1; i<n; i++) {
    key = a[i];
    j = i-1;
    while(j >= 0 && key > a[j]) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = key;

    print_array(a, n);
  }


  return;
}

void print_array(int* arr, int n) {
  printf("[");

  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");
  return;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

int find_min(int *a, int n, int type) {
  int min_value = a[0];
  int min_value_index = 0;

  for(int i = 1; i < n; i++) {
    if(a[i] < min_value) {
      min_value = a[i];
      min_value_index = i;
    }
    else;
  }

  if(type == 0)
    return min_value;
  else
    return min_value_index;
}