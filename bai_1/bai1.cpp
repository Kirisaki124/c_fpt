#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
  int age = 19;
  float grade;
  grade = 9.5;
  printf("Age is %d\n",age);
  printf("Grade is %f\n",grade);

  printf("Enter ur age\n");
  scanf("%d", &age);

  printf("Enter ur grade\n");
  scanf("%f", &grade);

  printf("Ur age: %d \n Ur grade: %f \n", age, grade);
  getchar();
  return 0;
}
