#include "stdio.h"
void print_menu(){
  printf("Choose the following options: \n");
  printf("1. Tax calculator\n");
  printf("0. Exit\n");
  printf("Your choice: (1/0)\n");
}

int input_income(){
  int income;
  printf("Your income:");
  scanf("%d", &income);
  if (income <= 0){
    printf("wrong input\n");
    input_income();
  }
  else
    // printf("sdfs %d", income);
    return income;
}

int menu(){
  int choice;
  print_menu();
  scanf("%d", &choice);
  if (choice == 1){
    return 0;
  }
  else if (choice == 0){
    printf("Exit");
  }
  else{
    printf("Wrong input\n");
    menu();
  }
}

int pension_contributions(int income){
    int pc;
    char choice_pc;
    printf("Pension contributions (5%%) y/n? \n");
    scanf("%c", &choice_pc);
    if (choice_pc == 'y'){
      pc = (income * 5)/100;
      return pc;
    }
    else if (choice_pc == 'n'){
      pc = 0;
      return pc;
    }
    else{
      printf("Wrong input \n");
      pension_contributions(income);
    }
}

int health_insurance(int income){
    int hi;
    char choice_hi;
    printf("Health_insurance (1%%) y/n? \n");
    scanf("%c", &choice_hi);
    if (choice_hi == 'y'){
      hi = (income * 1)/100;
      return hi;
    }
    else if (choice_hi == 'n'){
      hi = 0;
      return hi;
    }
    else{
      printf("Wrong input \n");
      health_insurance(income);
    }
}

int income = input_income();

int number_of_dependants(){
  int nod;
  printf("Number of dependants < 18 years old: \n");
  scanf("%d", &nod);
  if (nod < 0) {
    printf("Wrong input");
  }
  else
    return nod;
}

int tax(){
  int tax;
  if (income <= 5000000)
    {tax = income*0.05;
    return tax;}
  else if (income <= 10000000)
    {tax = income*0.1;
    return tax;}
  else if (income <= 20000000)
    {tax = income*0.15;
    return tax;}
  else if (income <= 30000000)
    {tax = income*0.2;
    return tax;}
  else if (income <= 50000000)
    {tax = income*0.25;
    return tax;}
  else if (income <= 80000000)
    {tax = income*0.3;
    return tax;}
  else
    {tax = income*0.35;
    return tax;}
}

int main(){
  int pc_money, hi_money, nod_money, total, gtc = 1000, per_allow = 4000, taxable_income;
  pc_money = pension_contributions(income);
  hi_money = health_insurance(income);
  nod_money = number_of_dependants() * 1600;
  total = pc_money + hi_money + nod_money + gtc + per_allow;
  taxable_income = income - total;
  printf("%d\n",total);
  printf("%d\n", taxable_income);
}
