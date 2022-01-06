//Modern Approach - K.N King
//Programming Project. Chapter 2. Number 6
//Using Horner's Rule to attempt NUmber 5 (polynomial.c)
//MaruJob

#include "stdio.h"
int main(){
    int number;
    printf("Enter a number (x): ");
    scanf("%d", &number);

    int product1, product2, product3, product4, product5;
    product1 = (3 * number) + 2;
    product2 = (product1 * number) - 5;
    product3 = (product2 * number) - 1;
    product4 = (product3 * number) + 7;
    product5 = (product4 * number) - 6;

    printf("\n\nYour answer is %d", product5);
    printf("\nYou can choose another number....\n");

    return 0;
}