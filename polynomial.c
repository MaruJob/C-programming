//Modern Approach - K.N King
//Programming Project - Chapter 2. Project 5
//MaruJob

#include "stdio.h"
#include <math.h>
int main(){
    int number;
    printf("Enter a number(x): ");
    scanf("%d", &number);
    int sum1, sum2, sum3, sum4, sum5;
    sum1 = 3 * (number * number * number * number * number); 
    printf("Sum 1: %d", sum1);
    sum2 = 2 * (number * number * number * number);
    printf("\nSum 2: %d", sum2);
    sum3 = 5 * (number * number * number);
    printf("\nSum 3: %d", sum3);
    sum4 =  number * number;
    printf("\nSum 4: %d", sum4);
    sum5 = 7 * number;
    printf("\nSum 5: %d", sum5);

    int finalAnswer = (sum1 + sum2) - (sum3 + sum4) + (sum5 - 6);
    printf("\nYour final answer is %d\n", finalAnswer);
    printf("You could enter another number....");

    return 0;
}