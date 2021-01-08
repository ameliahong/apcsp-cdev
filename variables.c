#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  a = c;
  c = 2;
  printf("The values of A and C is swapped, so now A is %d and C is %d\n", a, c); 

}
