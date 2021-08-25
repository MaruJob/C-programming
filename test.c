/*This Program was written to convert inputted numbers into their floating-point equivalents
*The new equivalent will have four significant figures with three being after the decimal point
*Date: 25-08-2021
*TIME 17:40
*/
#include "stdio.h"
int main(){
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("This is %.3e\n\n", num);
    return 0;
}