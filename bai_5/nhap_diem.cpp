#include "stdio.h"
#include "stdlib.h"

int main(){
    int choice = 1;

    while (choice == 1) {
        float grade = -1;
        while (grade < 0 || grade > 10) {
            printf("Enter ur grade:\n");
            scanf("%f", &grade );
        }
        if (grade >= 8 && grade < 10)
            printf("Good\n");
        else if (grade >= 5 && grade < 8)
            printf("Normal\n");
        else
            printf("Bad\n");

        printf("Continue ? 0:no 1:yes \n");
        scanf("%d", &choice );

    }
}
