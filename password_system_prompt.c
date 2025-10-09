/*
NAME:Graham wafula
PA106/G/28279/25
PROGRAM THAT KEEPS PROMPTING USER UNTILL THE CORRECT PASSWORD IS ENTERED
*/

#include <stdio.h>
int main(){
	int password = 1234;
	int attempt; //for wrong password//
	
	do{
	printf("Enter password to log in: \n");
	scanf("%d", &attempt);
	
	if(attempt != password){
		printf("Incorrect password! Try again.\n");
	}
	
	}while(attempt != password);
	printf("Access granted!");
	
	return 0;
} 