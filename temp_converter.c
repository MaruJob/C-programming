//A simple C program to convert temperature from Celsius to Fahrenheit
//Was done with the help of a function I created called "conver_to_fahr"
// Date : 24-08-2021. Time : 13:33

#include "stdio.h"
float convert_to_fahr(float celsius);
int main(){
    float celsius;
    printf("Hello! This program will help you convert temperature values from Celsius to Fahrenheit\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit_value = convert_to_fahr(celsius);
    printf("Temperature in Celsius: %.2f\n\n", fahrenheit_value);
    return 0;
}
float convert_to_fahr(float celsius){
   float fahrenheit_value = (9.0/5.0)*celsius + 32;
}