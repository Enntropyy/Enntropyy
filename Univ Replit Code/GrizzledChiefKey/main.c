#include <stdio.h>

int main( )
{
  int a;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &a);

  if(a==1)
  {
    int hap = 0;
    int i;

    for(i=1; i<=10; i++)
    {
      hap += i;
    }

    printf(" 1에서 10까지의 합: %d \n", hap);
  }
  return 0;
}