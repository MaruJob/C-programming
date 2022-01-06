//Modern Approach - K.N King
//Programming Project - Chapter 5 - Number 4
//December 31, 2021

#include "stdio.h"
int main(void){
    int speed;
    printf("Enter speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1){
        printf("Description: Calm\n");
    }
    else if (speed >= 1 && speed <= 3){
        printf("Description: Light air\n");
    }
    else if(speed >= 4 && speed <= 27){
        printf("Description: Breeze\n");
    }
    else if(speed >= 28 && speed <= 47){
        printf("Description: Gale\n");
    }
    else if(speed >= 48 && speed <= 63){
        printf("Description: Storm\n");
    }
    else printf("Description: Hurricane\n");
    return 0;
}