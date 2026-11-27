#include <stdio.h>
 
int main()
{
    int a = 15;
    int b = 27;
    int c = 3;
 
    a %= c;
    b %= c;
 
    printf("%d\n", a);
    printf("%d\n", b);
 
    return 0;
}