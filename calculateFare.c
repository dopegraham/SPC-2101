//Program to calculate fare
/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>

int calculateFare(distance_travelled);

void main(){
int	distance_travelled,total_fare;
printf("enter distance in kilometres: ");
scanf("%d",&distance_travelled);
total_fare=calculateFare(distance_travelled);

printf("the total fare is ksh.%d",total_fare);
	
}

int  calculateFare(distance_travelled){
int total_fare;

total_fare=distance_travelled * 50;

return total_fare;
	
}