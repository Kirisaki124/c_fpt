#include "stdio.h"
#include "stdlib.h"

int main(){
  int a, b, c;

//nhap thong tin
  printf("a =");
  scanf("%d", &a);
  printf("b =");
  scanf("%d", &b);
  printf("c =");
  scanf("%d", &c);

// check delta suy ra ket luan
  int delta = b*b-4*a*c;
  if (delta > 0) {
    printf("pt 2 no");
  }else if (delta == 0){
    printf("pt 1 no");
  }else{
    printf("ko co no");
  }
  system("pause");
}
