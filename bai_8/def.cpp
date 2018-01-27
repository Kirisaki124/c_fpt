#include "stdio.h"
#include "stdlib.h"

int add(int a, int b, int c){
  int sum;
  sum = a + b + c;
  return sum;
}

int mutiple(int a, int b){
  int result;
  result = a * b;
  return result;
}

void even_or_odd(int a){
  if (a % 2 == 0){
    printf("So chan");
  }
  else{
    printf("So le");
  }
}

int check_max_min(){
  int max = 150, min = 0, inp;
  while (inp > max or inp < min) {
    printf("input =");
    scanf("%d", &inp );
  }
  printf("Ur input = %d", inp );
}

int pows(int x,int y){
  int result = x;
  for (y = y; y >= 2; y--) {
    result *= x;
  }
  printf("result = %d", result);
  return result;
}

int main(){
  // int t, x = 3, y = 7, z = 5;
  // t = add(x,y,z);
  // printf("%d\n",t);


  // int muti;
  // muti = mutiple(3,7);
  // printf("%d\n",muti);

  // even_or_odd(5);


  // check_max_min();

  int x;
  x = pows(2,3);

}
