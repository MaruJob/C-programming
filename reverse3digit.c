//Programming Project- Chapter 4- Number 2
//A modified version of reverse.c It takes three digits rather than two.
//Date: 31-08-2021. @18:19

#include "stdio.h"
int main(){
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int num2 = num/100;
    int reduced = num%100;

    int num3 = reduced/10;
    int num4 = reduced%10;

    printf("Its reverse is : %d%d%d\n\n", num4,num3,num2);
    return 0;

}