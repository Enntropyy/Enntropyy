#include <stdio.h>

int main()
{
  int aa[5];
  int i;
  int l;

  for(i=0; i<5; i++)
  {
    printf("자연수를 입력하세요 : ");
    scanf("%d", &aa[i]);
  }
  printf("\n");
  
  l = aa[0];
  for(i=0; i<5; i++)
  {
    if(l<aa[i])
    {
      l=aa[i];
    }
  }
  printf("최댓값 : %d\n", l);

  return 0;
}