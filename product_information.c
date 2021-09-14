//Programming Project-Chapter 3-Number 2
//Done on 26=08-2021
//@ 05:20
#include "stdio.h"
int main(){
    int item, month, day, year;
    float unitPrice;

    printf("Enter item number: ");//Item number is entered by user
    scanf("%d", &item);

    printf("Enter unit price: ");//Unit price is entered by user
    scanf("%f", &unitPrice);

    printf("Enter purchase date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month,&day,&year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");/*Pardon its length... The printf func first of all
    prints ITEM tabulates prints UNIT, tabs again, prints PURCHASE, goes to the next line, continues a similar process  */
    printf("%d\t$%6.2f\t%-1d/%d/%d\n\n", item,unitPrice,month,day,year);//prints out the inputed values under its resp columns
    printf("Next Customer please......\n");// Fun way to close a program... ;-)

    return 0;
    //Edited on Sept 14, 2021
}