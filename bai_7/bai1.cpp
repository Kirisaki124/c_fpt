#include "stdio.h"
#include "stdlib.h"

int main(){

  float a, b, c, max, min;
  printf("Enter a:");
  scanf("%f", &a);
  printf("Enter b:");
  scanf("%f", &b);
  printf("Enter c:");
  scanf("%f", &c);
// max
  if (a > b){
    max = a;
  }
  else{
    max = b;
}
  if (c > max){
    max = c;
}

//min
  if (a > b){
    min = b;
  }
  else{
    min = a;
}
  if (c < min){
    min = c;
}

float average = (a + b + c) / 3;
//Print
  printf("Max = %.2f \n", max);
  printf("Min = %.2f \n", min);
  printf("average = %.2f\n", average);

  if (a != min && a != max)
    printf("(%.2f, %.2f, %.2f)\n",min , a, max);
  else if (b != min && b != max)
    printf("(%.2f, %.2f, %.2f)\n",min , b, max);
  else
    printf("(%.2f, %.2f, %.2f)\n",min , c, max);

}
