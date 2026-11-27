//3.	임의의 자연수 5개를 입력 받아 1차원 배열에 저장한 후, 입력 받은 값이 짝수이면 2배 큰 수로 대체하고 입력 받은 값이 홀수 이면 입력 받은 값보다 1 큰 수로 대체하시오. (예: 입력 1 2 3 4 5 → 연산 후 출력 2 4 4 8 6) [20점]

#include <stdio.h>

int main()
{
  int i;
  int aa[5];

  for(i=0; i<5; i++)
  {
    printf("자연수를 입력하세요 : ");
    scanf("%d", &aa[i]);
  }
  printf("\n");

  printf("연산 후 출력 : \n");

  for(i=0; i<5; i++)
  {
    if(aa[i]%2 == 0)
    {
      aa[i]*=2;
    }

    if (aa[i]%2 == 1)
    {
      aa[i]++;
    }

    printf("%d\n", aa[i]);
    
  }

  return 0;
}