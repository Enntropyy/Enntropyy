#include <stdio.h>

int main() 
{
  int aa[5][5] = 
  {
    { 1,0,0,0,0 },
    { 2,3,0,0,0 },
    { 4,5,6,0,0 },
    { 7,8,9,10,0 },
    { 11,12,13,14,15 }
  };

  int i, k;

  for( i=0; i<5; i++)
  {
    for( k=0; k<5; k++)
    {
      printf("%3d", aa[i][k]);
    }
   printf("\n");
  }
  
  return 0;
}