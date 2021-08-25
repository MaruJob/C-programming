//Programming Project-Chapter 2-Number 2
//A C program that computes volume of a sphere
//Date : 25-08-2021. Time: 14:22
#include "stdio.h" 
#define PI 3.14159
int main(){
    int r = 10;//Where r is the radius of the sphere and the value,10, is in metres
    int volume, radius_cube;//where radius_cube will refer to r^3
    radius_cube =  r*r*r;
    volume = 4*PI*radius_cube;
    printf("Volume of Sphere is %d\n\n", volume);
    return 0;
}