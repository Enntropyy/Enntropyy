//5.	1~5 사이의 임의의 자연수 10개를 입력 받은 후, 각 숫자에 대한 입력 빈도를 출력하시오. (예: 입력 1122224455 → 연산 후 출력 1: 2, 2: 4, 3: 0, 4: 2, 5: 2) [20점]

#include <stdio.h>

int main(void)
{
    int aa[10];
    int bb[5];
    int i, j, k;
    
    printf("자연수를 입력하세요 : \n");

    for (i = 0; i < 10; i++)
    {
        
        scanf("%d", &aa[i]);
    }
    printf("\n");

    for (j = 1; j <= 5; j++)
    {
        int z = 0;
        for (k = 0; k < 10; k++)
        {
          if (aa[k] == j)
            z++;
        }
        bb[j - 1] = z;
    }

    printf("연산 후 출력 : \n");

    int x = 1;
    for (int h = 0; h < 5; h++)
    {
        printf("%d: %d", x, bb[h]);
        if (h<4)
        {
            printf(", ");
        }
        x++;
    }


    return 0;
}