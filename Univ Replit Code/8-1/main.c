//1.	키보드로부터 임의의 문자열을 입력 받은 후, 입력 받은 문자열의 길이(n)가 10보다 클 때 (n>10) 입력 받은 문자열을 n회 반복하여 출력하고, 그 이외의 다른 경우에는 아무것도 수행하지 않는 프로그램을 작성하시오. (힌트: strlen 이용) [20점]

#include <stdio.h>
#include <string.h>

int main() 
{
  int a;
  
  printf("문장을 입력하세요 : ");
  
  char ss[100];
  scanf("%s", ss);

  int len;
  len = strlen(ss);

  if(len>10)
  for(a=0; a<len; a++)
  {
    printf("%s", ss);
    printf("\n");

 
  printf("\n");

  }

  return 0;
}