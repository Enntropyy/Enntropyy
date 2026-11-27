#include <stdio.h>

// Sorting = Ascending, Descending
// Array
// data type: int, float, char

//for loop - 별 찍기
/*
    *    -(blank:4, *:1)
   ***   -(blank:3, *:3)
  *****  -(blank:2, *:5)
 ******* -(blank:1, *:7)
*********-(blank:0, *:9)
 ******* -(blank:1, *:7)
  *****  -(blank:2, *:5)
   ***   -(blank:3, *:3)
    *    -(blank:4, *:1)
*/

int main(void) {
  
  int i, j;
  int num = 5;

  //Outer loop
  for(i=0; i<num; i++){ // Line
    //Inner loop
    for(j=num-1; j>i; j--){
      printf(" ");
    }

    for(j=0; j<2*i+1; j++){
      printf("*");
    }
    printf("\n");

  }
    //Outer loop
  for(i=1; i<num; i++){ // Line
    //Inner loop
    for(j=0; j<i; j++){
      printf(" ");
    }
    
    for(j=2*num-1; j>2*i; j--){
      printf("*");
    }
    printf("\n");

  }
  return 0;
}