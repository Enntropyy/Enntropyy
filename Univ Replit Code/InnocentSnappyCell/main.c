#include <stdio.h>

int main(void) {

int i ;
int x , y;  // x and y should be initialized in advance (See Hint 4)

x = 1;
y = 1;

const int key[] = {88, 102, 109, 100, 112, 110, 102, 33, 117, 112, 33, 73, 67, 79, 86, 33, 69, 68, 70}; // Do NOT touch this sentence (See Hint 1)

for(i = 0 ; i < sizeof(key)/sizeof(int) ; i++){ // Do NOT touch this sentence (See Hint 2)
printf("%c\n", x* key[i]-y); // Please try to modify this sentence (See Hint 3)
}

return 0;

}
