//A C program that converts time enterd by the user in the 24-hour system into the 12-hour system
//Programming project. Modern Approach. Chapter 5. Number 2
//MaruJob
#include "stdio.h"
 
int main(){
    int hour24, minute ;
   
    printf("Enter a 24-hour time: ");
    
    scanf("%d:%d", &hour24, &minute);

    if(hour24 > 24 || minute >= 60){ 
    printf("Incorrect, please try again.....\n");
    }
    else {  
    printf("Equivalent 12-hour time: ");
       
    switch(hour24){
        case(12): printf("12:"); break;
        case(13): printf(" 1:"); break;
        case(14): printf(" 2:"); break;
        case(15): printf(" 3:"); break;
        case(16): printf(" 4:"); break;
        case(17): printf(" 5:"); break;
        case(18): printf(" 6:"); break;
        case(19): printf(" 7:"); break;
        case(20): printf(" 8:"); break;
        case(21): printf(" 9:"); break;
        case(22): printf("10:"); break;
        case(23): printf("11:"); break;
        case(24): printf("00:"); break;
        default: printf("%d:", hour24); break;
    }
     
    if (minute >= 0 && minute <= 9){
        printf("0%d", minute);
    }
    else{
        printf("%d", minute); 
    }
    if(hour24 >= 12){
        printf(" PM");
    }
    else{ 
    printf(" AM");
    }
    }
    return 0;
}
