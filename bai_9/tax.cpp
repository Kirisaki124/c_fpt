#include "stdio.h"

//////////////////////////////////////////////////////
void persion_contributions(income) {
  int pc = 0;
  char choice;
  printf("Persion contributions (5%%) (y/n): ");
  scanf("%c", &choice);
  if (choice == "y"){
    pc = (income * 5)/100
  }
  else if (choice == "n"){
    continue;
  }
  else
    printf("Wrong input");
    persion_contributions(income);
}
//////////////////////////////////////////////////////
void health_insurance(income){
  int hi = 0;
  char choice;
  printf("Health insurance (1%%) (y/n): ");
  scanf("%c", &choice);
  if (choice == "y"){
    pc = (income * 5)/100
  }
  else if (choice == "n"){
    continue;
  }
  else
    printf("Wrong input");
    health_insurance(income);
}
//////////////////////////////////////////////////////
void number_of_dependants(){
  int nod = 0;
  printf("Number of dependants < 18 years old");
  scanf("%d", &nod);
  if (nod < 0){
    printf("Wrong input");
    number_of_dependants();
  }
}
//////////////////////////////////////////////////////
void tax_calculator(){
  int income;
  char choice;
  printf("Income for the month (in thousand VND):");
  scanf("%d", &income);
  if (income <= 0){
    printf("Wrong input");
  }
  // persion contributions
  persion_contributions(income);
  // health insurance
  health_insurance(income);
// fflush(stdin);  // xóa bộ đệm
// continue // nhảy thẳng
}
int main(){
  // starter
  int selection;
  printf("Choose one of the following options:\n");
  printf("1.  Tax calculator\n");
  printf("2.  Exit\n");
  printf("Your selection (0 -> 1):");
  scanf("%d", &selection);

  // body
  if (selection == 0) {
    return 0;
  }
  else if (selection == 1){
    tax_calculator();
    return 0;
  }
  else
    printf("Wrong input\n");
    main();
}
