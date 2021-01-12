#include <stdio.h>

int main()
{
  float d = 2.3;
  float e = 4.5;
  int a;
  int* ptrtoa;
  float* ptrtod;
  float* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  float temp = d;
  d = e;
  e = temp;

  printf("After swapping d and e values, d is now %f and e is %f\n", d, e);


  printf("The value of d is %f\n", d);
  printf("The address of d is %p\n", &d);

  printf("The value of e is %f\n", e);
  printf("The address of e is %p\n", &e);
 
  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

}
