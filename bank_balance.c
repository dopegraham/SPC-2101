/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
PROGRAM THAT ALLOWS USERS TO WITHDRAW MONEY FROM THEIR BANK ACCOUNT UNTIL THE BALANCE IS ZERO OR NEGATIVE

*/

#include <stdio.h>
int main(){
	int amount;
	int balance=5000;
	printf("your current balance is %d\n",balance );
	
	while(balance>0)
	{
		printf("enter the amount you wish to withdraw: ");
		scanf("%d",&amount);
		balance=balance-amount;
		printf("your new balance:=%d \n",balance);
		
	}
	printf("insuficient balance");
	
	return 0;
}