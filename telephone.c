// Modern Approach - K.N King
// Programming Project 3 - Number 4
// December 29, 2021

#include "stdio.h"
int main(){
    int num1, num2, num3;
    printf("Enter a number [(xxx) xxx-xxx]:");
    scanf("(%d) %d-%d", &num1, &num2, &num3);
     
    printf("\nYou entered %d.%d.%d\n", num1, num2, num3);

    return 0;
}