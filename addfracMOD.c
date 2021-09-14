//A modified version of addfrac.c
//Programming Project - Modern Approach to C Programming by K.N King
#include "stdio.h"
int main(){
    int num1, denum1, num2, denum2;
    printf("Enter two fractions separated by a plus sign(a/b + c/d ): ");
    scanf("%d/%d + %d/%d", &num1,&denum1,&num2,&denum2);
    int newNum = (denum2 * num1) + (denum1 * num2);
    int newDenum = denum1 * denum2;
    printf("Resulting fraction is %d/%d\n", newNum, newDenum);
    return 0;

}