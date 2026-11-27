#include <iostream>
using namespace std;

int main() 
{
  const int c1 = 1;
  int const c2 = 2;

  cout << c1 << endl << c2 << endl;

  const int c3; // Error
  c3 = 3; // Error

  c2 = 4; // Error

  return 0;
}
