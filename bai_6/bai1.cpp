#include "stdio.h"
#include "stdlib.h"

int main(){
  // int n = -1, s1 = 0, s2, i = 1;
  // while (n < 0 and n % 2 == 1) {
  //   printf("Enter a number: ");
  //   scanf("%d", &n);
  //   }
  //
  //   for (i; i <= n; i++) {
  //     s1 = s1 + i;
  //   }
  //
  //   printf("sum 1 + 2 + 3 + ... + n = %d\n", s1 );



    // do{
    //     printf("Enter n: \n");
    //     scanf("%d", &n);
    //   }
    //   while (n % 2 == 1);
    //     s1 = 0;
    //   for(i = 1; i <= 1; i++)
    //     s1 = s1 + i;
    //   printf("sum 1 + 2 + 3 + ... + n = %d\n", s1 );





    // int n = -1, s2 = 1, i = 1;
    // while (n < 0) {
    //   printf("Enter n\n");
    //   scanf("%d",&n );
    // }
    // for (i; i <= n; i++)
    //   s2 = i * s2;
    // printf("%d! %d \n",i, s2);





    int n = -1, i = 1;
    float s3 = 0;
    while (n < 0) {
      printf("Enter n\n");
      scanf("%d", &n );
    }

    for(i; i <= n ; i++)
      s3 = (float)1/i + s3;
    printf("%.2f \n", s3);
  }
