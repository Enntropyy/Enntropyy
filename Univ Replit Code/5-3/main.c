#include <stdio.h>

int main( )
{
  int a;
  int i, k;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &a);

  if(a==4)
  {
    for(i=0; i<10; i++)
    {
      for(k=0; k<10-i; k++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
