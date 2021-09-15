//Program that converts decimal integers entered by user into its octal equivalent
//Done on 15th Sept., 2021. 07:59
//MaruJob
#include "stdio.h"
int main(){
    int decNum, octNUm;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decNum);
    int rem1 = decNum%8;//Here rem1 stands for the first remainder we get after the original decimal is divided by 8
    int quo1 = decNum/8;//Simlarly, quo1 is the quotient gotten when the original decimal is divided by 8
    //We will be using similar vsriables below

    int rem2 = quo1%8;
    int quo2 = quo1/8;

    int rem3 = quo2%8;
    int quo3 = quo2/8;

    int rem4 = quo3%8;
    int quo4 = quo3/8;

    int rem5 = quo4%8;
     printf("In octal your number is %d%d%d%d%d\n", rem5, rem4, rem3, rem2, rem1);
    return 0;
}
//I actually enjoyed the logic I applied before getting to the end. But I believe it'll have been shorter if loops were involved.