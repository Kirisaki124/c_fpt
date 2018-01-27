#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main () {
  int a, b ,c;
  printf("ax^2 + bx + c\n");
  printf("a:\n");
  scanf("%d", &a);
  printf("b:\n");
  scanf("%d", &b);
  printf("c:\n");
  scanf("%d", &c);

  int x1 = (-b + sqrt(b*b -4*a*c))/(2*a) , x2 = (-b + sqrt(b*b + 4*a*c))/(2*a);
  printf("%dx^2 + %dx + %d\n",a,b,c);
  printf("x1:%d\n x2:%d\n",x1,x2 );

  system("pause");
}
