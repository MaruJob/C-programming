#include "stdio.h"
int main(){
    int n, sum = 0;

    printf("This program sums a series of integers. \n");
    printf("Enter integers (0 to terminate); ");
    scanf("%d", &n);

    for(int i = 0; n != 0; i++){ 
    sum += n;
    scanf("%d", &n);}

    printf("The sum is %d", sum);
    return 0;
}