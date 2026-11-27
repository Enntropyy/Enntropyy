#include <stdio.h>

int main( )
{
  int a;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &a);

  if(a==2)
  {
    int gop = 1;
    int i;

    for(i=1; i<=10; i++)
    {
      gop *= i;
    }

    printf(" 1에서 10까지의 곱: %d \n", gop);
  }
  return 0;
}
