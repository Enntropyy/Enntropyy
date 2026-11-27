#include <stdio.h>

int main()
{
  int aa[5];
  int i;

  for(i=0; i<5; i++)
  {
    printf("자연수를 입력하세요 : ");
    scanf("%d", &aa[i]);
  }
  printf("\n");
  
  printf("역순 : \n");
  for(i=4; i>=0; i--)
  {
    printf("%d\n", aa[i]);
  }

  return 0;
}