//PROGRAM TO PROMPT USERS TO ENTER THEIR HEIGHT,ID NUMBER AND BANK BALANCE

/*
Name:Graham wafula
Reg no:PA106/G/28759/25
Description:program to prompt a user
*/

#include<stdio.h>

int main(){
	int height;
	int ID_number;
	int bank_balance;
	
	//prompting height*/
	printf("enter your height:");
	scanf("%d",&height);
	printf("your height is %d\n",height);
	
	//prompting ID number*/
	printf("enter your ID number:");
	scanf("%d",&ID_number);
	printf("your ID_number is %d\n",ID_number);
	
	//prompting bank balance*/
	printf("enter your bank_balance:");
	scanf("%d",&bank_balance);
	printf("your bank_balance is %d",bank_balance);
	
	return 0;
}