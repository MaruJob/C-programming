// Modern Approach - K.N. King
//Programming Project 4 - Number 5
//December 29, 2021

#include "stdio.h"
int main(){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int firstSum, secondSum, Total; // Where 'rem' and 'diff' refer to remainder and difference respectively
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
    
    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;

    Total = (3 * firstSum) + secondSum;
    printf("Check digit is %d\n", 9 - ((Total - 1) % 10));

    return 0;

}