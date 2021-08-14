#include "stdio.h"
int main(void){
    void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);
    int dollars, twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    
    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n$5 bills: %d", fives);
    printf("\n$1 bills: %d", ones);

    return 0;
}
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones){ 
    *twenties = dollars / 20;
    dollars = dollars % 20;
    *tens = dollars / 10;
    dollars = dollars % 10;
    *fives = dollars / 5;
    dollars = dollars % 5;
    *ones = dollars / 1;
}
