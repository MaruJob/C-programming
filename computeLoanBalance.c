/*Programming Project - Chapter 2 - Number 8
*A C program that that computes the balance that remains after monthly payments
*Date: 25-08-2021. Time: 16:22
*/
#include "stdio.h"
int main(){
    float loan, rate, monthlyPayment;
    printf("Enter amount of loan:  ");
    scanf("%f", &loan);
    printf("\nEnter interest rate:  ");
    scanf("%f", &rate);
    printf("\nEnter monthly payment: ");
    scanf("%f", &monthlyPayment);
    
    float firstBalance, secondBalance, thirdBalance;
    firstBalance = loan - monthlyPayment;
    printf("\nBalance remaining after first payment: $%.2f\n", firstBalance);
    
    float monthlyRate =  (rate /100)/12;
    secondBalance = firstBalance - monthlyPayment;
    float increment1 = secondBalance*monthlyRate;
    secondBalance = secondBalance + increment1;
    printf("\nBalance remaining after second payment: $%.2f\n", secondBalance);

    float increment2;
    thirdBalance = secondBalance - monthlyPayment;
    increment2 = thirdBalance*monthlyRate;
    thirdBalance = thirdBalance + increment2;
    printf("\nBalance remaining after third payment: $%.2f\n", thirdBalance);

    return 0;
}