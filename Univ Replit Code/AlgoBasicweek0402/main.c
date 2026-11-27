#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int*, int);
void merge_sort(int*, int, int);
void merge(int*, int, int, int);

#define SIZE 50
int cnt = 0;

int temp[SIZE] = {0,};

int main(void) {

  srand(time(NULL));

  int i;
  int n = SIZE;
  int a[n];

  for(i=0; i<n; i++){
    a[i] = rand()%101; //0~100, modular
  }

  printf("[");
  for(i=0; i<n; i++){
    printf("%d ", a[i]);
  }
  printf("]");

  merge_sort(a, 0, n-1); 

  printf("\n----------------\n");
  printf("Final: \n");  print_array(a, n);

  return 0;
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
  // printf("[merge] p= %d, q = %d, r = %d\n", p, q, r);
  for(int j=0; j<=cnt; j++) printf("\t");
  // for(int j=p; j<=r; j++) {
  //   printf("%d ", arr[j]);
  // }
  // printf("\n");
  cnt--;

  return;
}

void merge_sort(int* arr, int p, int r){

  int q;
  if (p<r) {
    cnt++;
    q=p-(p-r)/2;

    for(int j=0; j<cnt; j++) printf("\t");
    // printf("[merge_sort] p = %d, q = %d, r = %d\n", p, q, r);
    for(int j=0; j<cnt; j++) printf("\t");
    // for(int j=p; j<=r; j++) {
    //   printf("%d ", arr[j]);
    // }
    // printf("\n");

    merge_sort(arr, p, q);
    merge_sort(arr, q+1, r);
    merge(arr, p, q, r);
  }
  else{
    for(int j=0; j<=cnt; j++) printf("\t");
    // printf("[merge_sort/break] p = %d, q = %d, r = %d\n", p, q, r);
    for(int j=0; j<=cnt; j++) printf("\t");
    // for(int j=p; j<=r; j++) {
    //   printf("%d ", arr[j]);
    // }
    // printf("\n");
  }
  return;
}

void print_array(int* arr, int n) {
  printf("[");

  for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");
  return;
}