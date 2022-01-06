//Programming Project-Chapter 4-Exercise 1
//A program that reverses a two digit number entered by the user
// Date: 31-08-2021. Time: 18:09
#include "stdio.h"
int main(){
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    int num2 = num%10;
    int num3 = num/10;
    
    printf("The reversal is: %d%d\n\n", num2,num3);
    return 0;
}