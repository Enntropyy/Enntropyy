#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int i, n;
  
  printf("정수의 개수를 입력하시오: ");
  scanf("%d", &n);

  int a[100] = {0,};
  
  int minValue = 9999;

  for(i=0; i<n; i++){
    a[i] = rand()%100; //0~99, modular
  }

  for(i=0; i<n; i++){
    printf("(%d) %d\n", (i+1), a[i]);
  }

  minValue = a[0];
  for(i=1; i<n; i++){
    if(minValue > a[i]){
      minValue = a[i];
    }
  }

  printf("----------------\n");
  printf("Min Value : %d\n", minValue);

  return 0;
}

