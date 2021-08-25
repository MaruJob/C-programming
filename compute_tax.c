//A program to display amount entered by user plus 5% tax
//Programming Project-Chaptr 2-Number 4
//Date: 25-08-2021. Time: 15:37
#include "stdio.h"
#define TAX 0.1
int main(){
    float amount;
    printf("Hello User! Please I'd like you to enter an amount(in dollars-and-cents)\n\n");
    printf("It will be computed and its value given\n\n");
    printf("Enter an amount: $");
    scanf("%f", &amount);
    float final_amount= amount + (TAX*amount);
    printf("With added tax: $%.2f\n\n\n", final_amount);
    return 0;
}