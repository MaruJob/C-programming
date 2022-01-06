//Programming Project- Chapter 4- Number 2
//A modified version of reverse.c It takes three digits rather than two.
//Rather than splitting using the remainder, it takes each digit from the three-digit number respectively

#include "stdio.h"
int main(){
    int num1, num2, num3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1,&num2,&num3); /*Previously I used %d but later found that %1d was preferable.
    Reserving a single mem space for an 'int' variable seemed to hinder next line character. I don't understand it all.
    Might need a bit of clarification*/
    printf("Its reverse is %d%d%d", num3, num2, num1);
    return 0;
}