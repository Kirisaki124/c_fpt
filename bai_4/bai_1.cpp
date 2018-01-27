#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main() {
  int a, b, c;
  int chuvi;
  float dientich;

// nhap thong tin
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

// check tam giac
if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c >a) {
  chuvi = a + b + c;
  float chuvi2 = chuvi / 2;
  dientich = sqrt(chuvi2*(chuvi2-a)*(chuvi2-b)*(chuvi2-c));
  printf("chu vi: %d ", chuvi);
  printf("dien tich: %f", dientich );
} else{
  printf("ko phai tam giac");
}


  system("pause");

}
