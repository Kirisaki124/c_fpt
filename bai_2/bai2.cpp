#include "stdio.h"
#include "stdlib.h"

int main() {
  int dai, rong;


  printf("chieu dai\n");
  scanf("%d", &dai );

  printf("chieu rong\n");
  scanf("%d", &rong );

  int dientich = dai * rong;
  int chuvi = (dai + rong) * 2;


  printf("Dien tich %d\n",dientich);
  printf("Chu vi %d\n",chuvi );

  system("pause");
  return 0;
}
