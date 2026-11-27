//2.	키보드로부터 임의의 문자열을 입력 받은 후, 입력 받은 문자열이 “HBNU”이면 “University”를, 입력 받은 문자열이 “HBNU”가 아닌 다른 문자열일 경우에는 “High Five”를 출력하는 프로그램을 작성하시오. (힌트: strcmp 이용) [20점]


#include <stdio.h>
#include <string.h>

int main() 
{
  printf("문자열을 입력하세요 : ");

  char ss[100];
  char tt[] = "HBNU";
  scanf("%s", ss);

  int r; 
  r =strcmp(ss, tt);

  if(r==0)
  {
    printf("University");
  }
  else
  {
    printf("High Five");
  }

  return 0;
}