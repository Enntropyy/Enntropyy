#include <stdio.h>

int main()
{
  int a, b, c, d;//정수형 변수 선언
  int e = 10;//정수형 변수 e의 값 지정

  printf("첫번째 값 ==> ");//[printf-1] 질문 출력
  scanf("%d", &a);//[scanf-1] 정수 a를 입력
  printf("두번째 값 ==> ");//[printf-2] 질문 출력
  scanf("%d", &b);//[scanf-2] 정수 b를 입력

  c = a + b;//[arith-1] c는 정수 a와 b의 합
  printf("%d + %d = %d\n", a, b, c);

  c = a - b;//[arith-2] c는 정수 a와 b의 차
  printf("%d - %d = %d\n", a, b, c);
  
  c = a * b;//[arith-3] c는 정수 a와 b의 곱
  printf("%d * %d = %d\n", a, b, c);

  c = a % b;//[arith-4] c는 정수 a를 b로 나눈 나머지 값
  printf("%d %% %d = %d\n", a, b, c);
  
  a+=10;//[assign-1] a=a+10
  b-=10;//[assign-2] b=b-10
  printf("a + 10 = %d\n", a);
  printf("b - 10 = %d\n", b);

  a*=2;//[assign-3] a=a*2
  b/=2;//[assign-4] b=b/2
  printf("a * 2 = %d\n", a);
  printf("b / 2 = %d\n", b);
  
  a%=3;//[assign-5] a=a%3
  printf("a %% 3 = %d\n", a);

  a++;//[incre/decre-1] a=a+1
  printf("a++ 의 값 : %d \n", a++);//[incre/decre-2] a=a+1의 후치 증가 연산자
  printf("현재 a의 값 : %d \n", a);
  printf("++a 의 값 : %d \n", ++a);//[incre/decre-3] a=a+1의 전치 증가 연산자
  printf("현재 a의 값 : %d \n", a);
  printf("a-- 의 값 : %d \n", a--);//[incre/decre-4] a=a-1의 후치 감소 연산자
  printf("현재 a의 값 : %d \n", a);
  printf("--a 의 값 : %d \n", --a);//[incre/decre-5] a=a-1의 전치 감소 연산자
  printf("현재 a의 값 : %d \n", a); 

  d=a+b;//[arith-5] d는 정수 a와 b의 합
  printf("현재 d의 값 : %d \n", d);
  printf("2의 보수 값 : %d\n", ~d+1);//[bit-1] 2의 보수(d값)를 구함
  printf ("d를 왼쪽 1 회 시프트한 값 : %d \n", d<<1);//[bit-2]왼쪽 1회 시프트한 값 출력
  printf ("d를 왼쪽 2 회 시프트한 값 : %d \n", d<<2);//[bit-3]왼쪽 2회 시프트한 값 출력
  printf ("d를 왼쪽 3 회 시프트한 값 : %d \n", d<<3);//[bit-4]왼쪽 3회 시프트한 값 출력
  printf ("d를 오른쪽 1 회 시프트한 값 : %d \n", d>>1);//[bit-5]오른쪽 1회 시프트한 값 출력
  printf ("d를 오른쪽 2 회 시프트한 값 : %d \n", d>>2);//[bit-6]오른쪽 2회 시프트한 값 출력
  printf ("d를 오른쪽 3 회 시프트한 값 : %d \n", d>>3);//[bit-7]오른쪽 3회 시프트한 값 출력
  
  printf("현재 d의 값 : %d \n", d);
  printf("현재 e의 값 : %d \n", e);
  printf (" d & e = %d \n", d & e);//[bit-8]d의 값과 e의 값의 비트 논리곱(AND)
  printf (" d | e = %d \n", d | e);//[bit-9]d의 값과 e의 값의 비트 논리합(OR)
  printf (" d ^ e = %d \n ", d ^ e);//[bit-10]d의 값과 e의 값의 비트 배타적 논리합(XOR)

  return 0;

}