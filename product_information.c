//Programming Project-Chapter 3-Number 2
//Done on 26=08-2021
//@ 05:20
#include "stdio.h"
int main(){
    int item, month, day, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month,&day,&year);

    printf("Item    Unit Price   Purchase Date\n");
    printf("%-d\t$%6.2f\t   %4d/%d/%d", item,unitPrice,month,day,year);

    return 0;
}