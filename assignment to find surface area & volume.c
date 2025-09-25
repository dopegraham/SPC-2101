//Program to find volume and surface area of a cylinder
/*
Name:Graham wafula
Reg no:PA106/G/28759/25
*/
 
#include<stdio.h>
int main () {
	float radius,height,volume,surface_area;
	float pi=3.142;
	
	printf("enter the radius: ");
	scanf("%f",&radius);
	
	printf("enter the height: ");
	scanf("%f",&height);
	
	volume=pi * radius * radius *height;
	surface_area=2*pi*radius*radius +2*pi*radius*height;
	
	printf("the volume is %f",volume);
	printf("\n the surface_area is %f",surface_area);
	
	return 0;
}
	
	
	
	
