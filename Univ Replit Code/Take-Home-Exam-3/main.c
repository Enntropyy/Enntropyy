#include <stdio.h>

int main()
{
  int a[5];
  int i, k;
  int s = 0;

  printf("5개의 정수를 입력하시오 : \n");

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 5; i++)
  {
    printf("a[%d] = %d ", i, a[i]);
  }

  for (k = 4; k > 0; k--)
  {
    for (i = 0; i < k; i++)
    {
      if (a[i] < a[i + 1])
      {
        s = a[i];
        a[i] = a[i+1];
        a[i+1] = s;
      }
    }
  }
  
  printf("일 때, 정렬 후");

  for (i = 0; i < 5; i++)
  {
    printf(" a[%d] = %d", i, a[i]);
  }
  printf("\n");

  printf("Enntropyy\n");

  return 0;

}
