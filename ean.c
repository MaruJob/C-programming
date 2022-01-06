// Modern Approach - K.N. King
//Programming Project 4 - Number 6
//December 29, 2021

#include "stdio.h"
int main(){
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&j1,&j2,&j3,&j4,&j5,&j6);
    
    int firstSum, secondSum, Total;
    firstSum = i2 + i4 + i6 + j2 + j4 + j6;
    secondSum = i1 + i3 + i5 + j1 + j3 + j5;
    
    Total = (3*firstSum) + secondSum;

    printf("Check digit is: %d\n", 9 - ((Total -= 1)%10));
    return 0;
}