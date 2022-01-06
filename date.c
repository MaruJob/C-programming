//Modern Approach - K.N King
//Page number 89
//December 30, 2021

#include "stdio.h"
int main(){
    int day, month, year;
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, & year);

    printf("\nDated this ");
    if (day > 31){
        printf("......Error");
    }
    else{ 
    switch (day){
        case 1: case 21: case 31:
        printf("%dst", day); break;
        case 2: case 22:
        printf("%dnd", day); break;
        case 3: case 23:
        printf("%drd", day); break;
        default: printf("%dth", day); break;
    }
    }
    printf(" day of ");
    if (month<1 || month>12){
        printf("......Error");
    }
    else{
    switch (month){
        case 1: printf("January"); break;
        case 2: printf("Febuary"); break;
        case 3: printf("March");break;
        case 4: printf("April");break;
        case 5: printf("May");break;
        case 6: printf("June");break;
        case 7: printf("July");break;
        case 8: printf("August");break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    }
     
    printf(",20%.2d\n", year);// The '.2d' help me avoid the problem of having '2006' displayed as 206
    // I had earlier used if-else statements but found out from M.A that the %.2d was easier
    return 0;
    
}