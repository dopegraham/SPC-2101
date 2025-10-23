//Functoin to calculate electric bill
/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>

int calculateElectricBill(units_consumed);

void main(){
int units_consumed,amount;
	
printf("enter the units_consumed: ");
scanf("%d",&units_consumed);

amount=calculateElectricBill(units_consumed);
	
printf("the amount is %d",amount);	
	return 0;
}

int calculateElectricBill(units_consumed){
int amount;	
if (units_consumed>=200){
	amount=100*10+100*15+(units_consumed-200)*20;
}
else if(units_consumed<=100){
	amount=units_consumed*10;
}	
else if(units_consumed>100 && units_consumed<=200){
	amount=(units_consumed-100)*15 + 100*15;
}	
	return amount;
}