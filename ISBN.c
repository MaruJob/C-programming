//A program that breaks down the ISBN number of a book
//done on 26-08-2021
//@ 05:48
#include "stdio.h"
int main(){
    int Prefix, identifier, PublisherCode, itemNumber, checkDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &Prefix,&identifier,&PublisherCode,&itemNumber,&checkDigit);

    printf("GS1 Prefix: %d", Prefix);
    printf("\nGroup identifier: %d", identifier);
    printf("\nPublisher Code: %d", PublisherCode);
    printf("\nItem number: %d", itemNumber);
    printf("\nCheck digit: %d\n\n\n\n", checkDigit);

    return 0;
}