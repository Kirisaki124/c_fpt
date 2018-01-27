#include "stdio.h"
#include "stdlib.h"

int main(){
  int a, b, c, max;

  printf("Enter a:");
  scanf("%d", &a);
  printf("Enter b:");
  scanf("%d", &b);
  printf("Enter c:");
  scanf("%d", &c);

  int s = a + b + c;

  if (a > b)
    max = a;
  else max = b;

  if (max < c)
    max = c;

  printf("Max of (%d, %d, %d) is %d \n", a, b, c, max);

}
