#include "stdio.h"
#include "pay_amount.c"
int main(void){
    
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
 