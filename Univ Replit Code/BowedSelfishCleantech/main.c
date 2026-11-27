#include <stdio.h>

int x_aa(int *bb);
int main()
{
  int i;
  int aa[]={1, 5, 7, 4, 11, 17, 2};
  printf("배열 내림차순 정렬 : \n");
  x_aa(aa);
  for(i=0; i<7; i++)
  {
    printf("%d\n",aa[i]);
  }
  return 0;
}

int x_aa(int *bb)
{
	int i,j,k=0;
	int aa[7];
	int m;

	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
      if(bb[i]>bb[j])
		  {

			  k = k+1;

		  }
    }
    x_aa[6-k] = bb[i];
		k=0;
	}

	for(m=0;m<7;m++)
	{
		*bb = x_aa[m];
		bb = bb + 1;
	}
	return 0;
}