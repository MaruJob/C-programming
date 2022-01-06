//Modern Approach - K.N. King
//Programming Project - Chapter 5 - Number 5
//January 1, 2022

#include "stdio.h"
int main(){
    float income, tax_due;
    printf("Enter the amount of taxable income ($____): ");
    scanf("$%f", &income); 
        if (income >= 7000) { 
        tax_due = 230 + (0.06 * income);
        printf("Tax due = $%.2f\n", tax_due);
        }
        else if(income >= 5250){
        tax_due = 142.5 + (0.05 * income);
        printf("Tax due = $%.2f\n", tax_due);
        } 
        else if(income >= 3750){
        tax_due = 82.5 + (0.04 * income);
        printf("Tax due = $%.2f\n", tax_due);
        }
        else if(income >= 2250){
        tax_due = 37.5 + (0.03 * income);
        printf("Tax due = $%.2f\n", tax_due);
        }
        else if(income >= 750){
        tax_due = 7.5 + (0.02 * income);
        printf("Tax due = $%.2f\n", tax_due);
        }
        else {
        tax_due = (0.01 * income);
        printf("Tax due = $%.2f\n", tax_due);
        }
   
    return 0;
}