#include <stdio.h>



// student structure
// struct Student...

struct Student {
    char firstName[40];
    char lastName[40];
    int age;
    int studentId;
};

void printStudent(struct Student* student)
{
  printf("Student: %s %s\n", student->firstName, student->lastName);
  printf("age: %d\n", student->age);
  printf("id: %d\n", student->studentId);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students

  for (int i = 0; i < num; i++) {
    printf("---- student ----\n", i);
    printStudent(&students[i]);
  }
}


int main()
{
  char firstName;
  char lastName;
  int age;
  int studentId;

  // an array of students
  //xxx students;
  struct Student students[100];
  char input[256];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    struct Student student;
    char input1[256];
    printf("First name: ");
    fgets(input1, 256, stdin);
    sscanf(input1, "%s", student.firstName);
    char input2[256];
    printf("Last name: ");
    fgets(input2, 256, stdin);
    sscanf(input2, "%s", student.lastName);
    char input3[256];
    printf("Enter age: ");
    fgets(input3, 256, stdin);
    sscanf(input3, "%d", &student.age);
    char input4[256];
    printf("Enter id: ");
    fgets(input4, 256, stdin);
    sscanf(input4, "%d", &student.studentId);
    students[numStudents] = student;
      numStudents++;
    }
  }

  printf("\nGoodbye!\n");
}
