//A C program that counts the number of digits (1,2 and 3 only)
//Programming Project - Modern Approach.Chapter 5. Number 2.
#include "stdio.h"
int main(){
int number;
printf("Enter a number: ");
scanf("%d", &number);

if(number >= 0 && number <= 9){
printf("The number %d has 1 digit\n", number);
}
else if (number >= 10 && number <= 99){
printf("The number %d has 2 digits\n", number);
}
else  
printf("The number %d has 3 digits\n", number);


return 0;
}