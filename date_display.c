/************************************************************************
*Programming Project-Chapter 3-Number 1                                 *
*A simple C program that accepts date from the user in the form mm/dd/yy*
*It then converts it to the format yymmdd                               *
*yy = year, dd = day, mm = month                                        *
*Done on 25-08-2021                                                     *
*@ 19:26                                                                *
*************************************************************************/
#include "stdio.h"
int main(){
    int day,month,year;
    printf("Enter a date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    if(month < 10){
    printf("You entered the date %d0%d%d\n\n\n", year, month, day );
    }
    else
    printf("You entered the date %d%d%d\n\n\n", year, month, day );
    return 0;
}