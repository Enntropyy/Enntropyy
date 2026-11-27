#include <stdio.h>

int main()
{
	int i, k;
 
	for(i = 4 ; i < 10; i += 2)
  { 
		for(k = 0; k < (10-i); k++)
    {
      printf(" ");
    }
		for(k = 0; k <= i*2; k++)
    {
      printf("*");
    }
		for(k = 0; k <= (9-i)*2; k++)
    {
      printf(" ");
    }
		for(k = 0; k <= i*2; k++)
    {
      printf("*");
    }

		printf("\n");
	}

	for(i = 20; i >= 0; i -= 2)
  {
		for(k = 0;  k < 20 - i; k++)
    {
      printf(" ");
    }
		for(k = 0; k <= i * 2; k++)
    {
      printf("*");
    }
		
    printf("\n");
	}

  printf("Enntropyy\n");

	return 0; 
}
