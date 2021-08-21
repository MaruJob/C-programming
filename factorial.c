#include "stdio.h"
int factorial (int fact);
int main(){
    int fact;
    
    printf("Enter a number: ");
    scanf("%d", &fact);
    
    printf("  %d\n",  factorial(fact));
    return 0;
}
int factorial(int fact){
    if (fact <= 1){
        return 1;
    }
    else{
        return fact* factorial(fact-1);
    }
}