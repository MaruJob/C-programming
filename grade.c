//Program that computes scores and converts them into their corresponding letter grades
//Programming Project - Modern Approach
//MaruJob
//September 22 
 
#include "stdio.h"
int main(){
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    int tens;
    tens = grade/10;
    switch(tens){
    case (0): case (1): case (2): case (3): case (4): case(5):
    printf("Letter grade: F\n"); break;
    case(6):
    printf("Letter grade: D\n"); break;
    case(7):
    printf("Letter grade: C\n"); break;
    case(8):
    printf("Letter grade: B\n"); break;
    case(9): 
    printf("Letter grade: A\n"); break;
    default: printf("Error\n"); break;
    }
    if(tens == 100){
        printf("Letter grade: A\n");
    }
return 0;
}
