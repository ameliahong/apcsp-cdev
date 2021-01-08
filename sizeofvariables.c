#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'a';
  float c = 12.345;
  double d = 123.456;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));


  // print value and size of char variable
   printf("char b value: %c and size: %lu bytes\n", b, sizeof(b)); 


  // print value and size of float variable
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));


  // print double and size of double variable

  printf("double d value: %lf and size: %lu bytes\n", d, sizeof(d));


}

