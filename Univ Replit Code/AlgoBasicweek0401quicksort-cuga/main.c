#include <stdio.h>
#include <stdlib.h>

int find_max(int *, int, int);
void swap(int*, int*);
void print_array(int*, int);
void set_random_array(int*, int);
int* _men_allocation(int);
void _men_free(int*);

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

int partition(int*, int, int);
void quick_sort(int*, int, int);

#define SIZE 10
int cnt = 0;

int temp[SIZE] = {0,};

int main(void) {

  int n = SIZE;
  int a[] = {-67, 5, 11, 0, 2, 47, -22, 4, 63, 100};

  printf("Initial-\n"); print_array(a, n);

  printf("\nMerge Sort...... \n"); merge_sort(a, 0, n-1); 
  // printf("\nQuick Sort...... \n"); quick_sort(a, 0, n-1);

  printf("\nFinal: \n");  print_array(a, n);

  //_men_free(a);

  return 0;

}

void quick_sort(int* arr, int p, int r) {
  int q, i, j;

  if(p<r) {
    cnt++;
    for(j=0; j<cnt; j++) printf("\t");
    printf("[quick_sort] p = %d, r = %d\n", p, r);
    for(j=0; j<cnt; j++) printf("\t");
    for(j=p; j<r; j++) {
      printf("%d ", arr[j]);
    }
    printf("[%d]\n", arr[j]);

    q = partition(arr, p, r);
    quick_sort(arr, p, q-1);
    quick_sort(arr, q+1, r);
  }
  else{
    for(int j=0; j<=cnt; j++) printf("\t");
    printf("[quick_sort/break] p = %d, r = %d\n", p, r);
    for(int j=0; j<=cnt; j++) printf("\t");
    for(int j=p; j<=r; j++) {
      printf("%d", arr[j]);
    }
    printf("\n");
  }
  return;
}

int partition(int* arr, int p, int r) {
  int i = p-1, j;
  for(j=p; j<r; j++) {
    if(arr[j] < arr[r]){
      swap(&arr[++i], &arr[j]);
    }
  }
  swap(&arr[++i], &arr[r]);

  return i;
}

void merge(int* arr, int p, int q, int r) {
  int i=p, j=q+1, k=p;

  while(i<=q && j<=r) {
    if(arr[i] < arr[j]) {
      temp[k++] = arr[j++];
    }
    else{
      temp[k++] = arr[i++];
    }
  }
  while(i<=q)
    temp[k++] = arr[i++];
  while(j<=r)
    temp[k++] = arr[j++];

  for(i=p; i<=r; i++) {
    arr[i] = temp[i];
  }

  for(int j=0; j<=cnt; j++) printf("\t");
  printf("[merge] p= %d, q = %d, r = %d\n", p, q, r);
  for(int j=0; j<=cnt; j++) printf("\t");
  for(int j=p; j<=r; j++) {
    printf("%d ", arr[j]);
  }
  printf("\n");
  cnt--;

  return;
}

void merge_sort(int* arr, int p, int r){

  int q;
  if (p<r) {
    cnt++;
    q=p-(p-r)/2;

    for(int j=0; j<cnt; j++) printf("\t");
    printf("[merge_sort] p = %d, q = %d, r = %d\n", p, q, r);
    for(int j=0; j<cnt; j++) printf("\t");
    for(int j=p; j<=r; j++) {
      printf("%d ", arr[j]);
    }
    printf("\n");

    merge_sort(arr, p, q);
    merge_sort(arr, q+1, r);
    merge(arr, p, q, r);
  }
  else{
    for(int j=0; j<=cnt; j++) printf("\t");
    printf("[merge_sort/break] p = %d, q = %d, r = %d\n", p, q, r);
    for(int j=0; j<=cnt; j++) printf("\t");
    for(int j=p; j<=r; j++) {
      printf("%d ", arr[j]);
    }
    printf("\n");
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
