/*
NAME:Graham Wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>
int main(){
	int units_consumed;
	float total_water_bill;
	
	printf("enter the number of units of water consumed: ");
	scanf("%i",&units_consumed);
	
	if(units_consumed<=30){
	    total_water_bill=20 * units_consumed;
	}
	else if(units_consumed>30 && units_consumed<=60){
		total_water_bill=25 * units_consumed;
	}
	else
		total_water_bill=30 * units_consumed;
	
	printf("the total water bill is %f",total_water_bill);	
		
	return 0;
}