#include <stdio.h>

int main()
{
  int aa[5], bb[5];
  int i;
  
  for(i=0; i<5; i++)
  {
    printf("%d번째 자연수를 입력하세요 : ", i+1);
    scanf("%d", &aa[i]);
  }
  printf("\n");
  
  printf("복사된 값 : \n");
  for(i=0; i<5; i++)
  {
    bb[i]=aa[i];
    printf("%d\n", bb[i]);
  }
  printf("\n");

  for(i=0; bb[i]==aa[i]; i++)
  {
    printf("동일한 값을 가진다");
    break;
  }
  
  return 0;
}