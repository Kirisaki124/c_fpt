#include "stdio.h"
#include "stdlib.h"

int main(){
  int m, i;
  printf("Enter m:");
  scanf("%d", &m );

  // for(i = 0; i <= m ; i++)
  //   if(i % 3 == 0)
  //     printf("%d\n", i );

  for(i = 2; i < m ; i++)
    if(m % i == 0){
      printf("not prime\n");
      return 0;
    }
  printf("Prime\n");
}
