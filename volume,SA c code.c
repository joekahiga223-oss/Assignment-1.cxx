/*
Name:Joseph kahiga
Reg No:CT100/G/30618/26
Date:25th September
Description:program to find the volume and surface area of a cylinder
*/

#include <stdio.h>

//Define the value of PI 
#define PI 3.142

int main() {
double radius,height,volume,surface_area;

//prompt the user to enter the radius
printf("Enter the radius of the cylinder:");
scanf("%lf",&radius);

//prompt the user to enter the height
printf("Enter the height of the cylinder:");
scanf("%lf",&height);

//calculate the volume:volume=π*r²*h
volume=PI*radius*radius*height;

//calculate the surface_area:surface_area=2πr²+2πrh
surface_area=(2*PI*radius*radius)+(2*PI*radius*height);

//Display the calculated values
printf("\n--- Cylinder calculations ---\n");
printf("volume: %.2f\n",volume);
printf("surface_area :%.2f\n",surface_area);

return 0;
}