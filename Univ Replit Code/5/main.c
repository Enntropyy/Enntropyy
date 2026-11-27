#include <stdio.h>

int main( )
{
  int a;
  int i, k, b;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &a);

  if(a==5)
  {
    for(i=0; i<10; i++)
    {
      for(b=0; b<10-i; b++)
      {
        printf(" ");
      }
      
      for(k=0; k<=i; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}