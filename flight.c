//A C Program that shows the closest departure time and arrival time of flight
//Programming Project - Modern Approach - Chapter 5- Number 8
//MaruJob

#include "stdio.h"
int main(){
    int hour24, minute;
    printf("Enter a 24-hour time(e.g 21:30, 09:23): ");
    scanf("%d:%d", &hour24, &minute);
    
    int inputTime = (hour24 * 60) + minute;
    
    if(inputTime < 480){
        printf("Closest departure time is 8:00 am, arriving at 10:16 \n");
    }
    else if(inputTime > 480 && inputTime < 583){
        printf("Closest departure time is 9:43 am arriving at 11:52 am\n");
    }
    else if(inputTime > 583 && inputTime < 679){
        printf("Closest departure time is 11:19 am, arriving at 1:31 pm\n");
    }
    else if(inputTime > 679 && inputTime < 767){
        printf("Closest departure time is 12:47 pm, arriving at 3:00 pm\n");
    }
    else if(inputTime > 767 && inputTime < 840){
        printf("Closest departure time is 2:00 pm, arriving at 4:08 pm\n");
    }
    else if(inputTime > 840 && inputTime < 945){
        printf("Closest departure time is 3:45 pm, arriving at 5:55 pm\n");
    }
    else if(inputTime > 945 && inputTime < 1140){
        printf("Closest departure time is 7:00 pm, arriving at 9:20 pm\n");
    }
    else {
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm\n");
    }
    return 0;
}