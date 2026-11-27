#include <stdio.h>

int main(void){
  
  char sen1[] = "MidTerm Exam" ;
  char sen2[] = "String\0 Funtion" ;
  char sen3[] = "C programming\0" ;

  int i;
  for(i = 0; i < 20; i++)
  {
    if(sen1[i] == '\0')
    {
      printf("%d",i);
      break;
    }
  }
  printf("\n");

  for(i = 0; i < 20; i++)
  {
    if(sen2[i] == '\0')
    {
      printf("%d",i);
      break;
    }
  }
  printf("\n");

  for(i = 0; i < 20; i++)
  {
    if(sen3[i] == '\0')
    {
      printf("%d",i);
      break;
    }
  }
  printf("\n");
  
  printf("Enntropyy");

  return 0;
}
