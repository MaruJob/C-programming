//Programming Project-Chapter 3-Number 6
//Done 0n 26-08-2021
//@ 05:58
#include "stdio.h"
int main(){
    int num1, denum1, num2, denum2;
    int frac1, frac2;
    printf("Enter first fraction(e.g a/b): ");
    scanf("%d/%d", &num1, &denum1);
    printf("Enter second fraction(e.g a/b): ");
    scanf("%d/%d", &num2, &denum2);

    int newNum = (denum1 * num2) + (denum2 * num1);
    int newDenum = denum1*denum2;

    printf("The resulting fraction on calculating is ......%d/%d\n\n", newNum, newDenum);
    return 0;
}