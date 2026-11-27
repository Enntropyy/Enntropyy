#include <stdio.h>
#define SIZE 100

int main(void) {
  
  int n = SIZE; // Assumption
  int i, j;
  int count = 0;

  int prime_number[SIZE] = {0,}; // Dynamic Allocation

  for(j=1; j<n; j++) {
    //2~n-1
    for(i=2; i<j; i++) {
      if (j%i==0) {
        // Composite Number
        break;
      }
    }
    if(i==j) {
      // Prime Number
      printf("%d ", j);

      count++; // 소수 개수 카운트
    }
  }

  printf("\n");
  printf("Total Count : %d\n", count);

  return 0;
}