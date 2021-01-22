#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main

float areaOfCircle(float radius)
{
  float area;
  area = M_PI * radius * radius;
  return area;
}


int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
 for (int i = 0; i < reps; i++)
  {
    start = start + i;
    double area = areaOfCircle(start);
  printf("the area of the circle is %f\n", areaOfCircle(start));
  }


  // (activity 2 user input) extended program, input two numbers
  // controlling range of radius

  int firstInteger;
  int secondInteger;
  char input[256];

  printf("Enter an integer: ");
  fgets(input, 256, stdin); 
  if (sscanf(input, "%d", &firstInteger) != 1) {
  printf("Enter an INTEGER\n");
  return 0;
  }
  printf("Enter a second integer: ");
  fgets(input, 256, stdin);
  if (sscanf(input, "%d", &secondInteger) != 1) {
  printf("Enter an INTEGER\n");
  return 0;
  }


  while (secondInteger < firstInteger) {
  if (secondInteger < firstInteger) {
    printf("Enter an integer greater than %d: ", firstInteger);
    fgets(input, 256, stdin);
    sscanf(input, "%d", &secondInteger);
  }
  }

  int num;
  printf("All radiuses within the range %d to %d: ", firstInteger, secondInteger);
  for (num = firstInteger; num <= secondInteger; num++) {
    printf("\narea of radius %d = %f\n", num, areaOfCircle(num));
  }
   return 0;
}
