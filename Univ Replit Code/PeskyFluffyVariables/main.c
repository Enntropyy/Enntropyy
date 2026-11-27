#include <stdio.h>

int main(void)
{
   int num, min, i=0, ret;
   while (1)
   {
      printf("정수를 입력하시오. : ");
      ret = scanf("%d", &num);

      if (i == 0)
      {
         min = num;
         i++;
      }

      if (ret == EOF)
      {
         break;
      }
      else
      {
         if (num < min)
         {
            min = num;
         }
      }
      
   }

   printf("최소값 = %d \n", min);

   return 0;
}