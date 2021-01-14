#include <stdio.h>
#include <string.h>


int main()
{

// first string using a for loop by incrementing a character variable
// second string using string constant initializer
 
  char var1[27];
  char var2[27] = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < 26; i++) {
    var1[i] = 'a' + i;
  }

  var1[26] = '\0';

  for (int i = 0; i < 26; i++) {
    printf("%c ", var1[i]);
  }

  for (int i = 0; i < 26; i++) {
    printf("%c ", var2[i]);
  }

// comparing the two strings

  if (strcmp(var1, var2) == 0)
    printf("\nthe strings are identical\n");
  else
    printf("\nthe strings are different\n");

// updated string to uppercase with a for loop

  for (int i = 0; i < 26; i++) {
    var1[i] = var1[i] - 32;
    printf("%c ", var1[i]);
  }

// comparing the two strings again

if (strcmp(var1, var2) == 0)
    printf("\nthe strings are identical\n");
  else
    printf("\nthe strings are different\n");

// third string joining the first two strings

  char var3[52];
  
  strcpy(var3, var1);
  strcat(var3, var2);

// print out all three strings

  printf("%s + %s = %s\n", var1, var2, var3);
}
