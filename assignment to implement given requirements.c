//Program to implement to according requirements
/*
Name:Graham wafula
Reg no:PA106/G/28759/25
*/

#include <stdio.h>
int main(){
	int age,annual_income;
	
	printf("enter the age:");
	scanf("%d",&age);
	
	printf("enter the annual income:");
	scanf("%d",&annual_income);
	
	if(age>21 &&annual_income>21000)
		printf("congratulations you qualify for a loan!\n");
	else
	printf("unfortunately,we are unable to offer you a loan a time!\n");

return 0;

	}
