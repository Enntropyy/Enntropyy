//3.	무한 루프를 강제 종료시키기 전까지 PUSH/POP 연산을 할 수 있는, 최대 10개의 원소를 저장할 수 있는 STACK을 구현해보세요. 단, 아래 3개의 조건을 만족시키기 바랍니다. (배열 사용 방법 숙지 및 중간고사 대비). [40점]
//A.	switch-case 문 사용 X→ 필요시 if-else if-else 구문 이용.
//B.	원소의 개수가 10개일 때 PUSH할 경우 예외 처리 구현 (자유롭게)
//i.	예를 들어, “STACK에 더 이상 원소를 저장할 수 없습니다”라는 문구 출력
//ii.	예를 들어, top에 있는 원소를 강제로 POP 한 후, PUSH 수행
//C.	원소의 개수가 0개일 때 POP할 경우 예외 처리 구현 (자유롭게)
//i.	예를 들어, “STACK에 원소가 없습니다”라는 문구 출력
//☞ 힌트 1: 무한 루프 구현 시 while (1) 이용 / 종료 방법은 ctrl + c
//☞ 힌트 2: 원소를 저장하기 위해 배열 이용
//☞ 힌트 3: 교재 pp. 278~285 참고

#include <stdio.h>

int main()
{
  int stack[10];
  int top=0; 
  int s;
  int i = 1;
  
  
  printf("원소 입력 종료 시 ctrl+c 누르기\n");

  while(1)
  {
    printf("<1>원소 저장 <2>원소 빼기 : ");
    scanf("%d", &s);
    if(s==1)
    { 
      printf("원소 입력 : ");
      if(top<10)
      {
        scanf("%d", &stack[i]);
        printf("STACK 내의 %d번째로 입력받은 원소는 %d입니다.\n", top+1, stack[i]);
        top++;
        i++;
      }
      else
      { 
        top--;
        scanf("%d", &stack[i]);
        printf("STACK에 더 이상 원소를 저장할 수 없습니다.\n");
        printf("STACK 내의 %d번째로 새롭게 입력받은 원소는 %d입니다.\n", top+1, stack[i]);
        i++;
      }

    }
    else if(s==2)
    {
      if(top>0)
      { 
        top--;
        i--;
        printf("STACK 내의 %d번째로 입력받은 원소는 %d입니다.\n", top+1, stack[i-1]);
      }
      else
      {
        printf("STACK에 원소가 없습니다.\n");
      }
    }
  }


  return 0;
}
