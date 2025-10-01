//Program to facilitate mobile data purchase
/*
NAME:Graham Wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>

int main(){
	int choice;
	
	printf("select data bundle\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	
	printf("Enter your choice(1-4):");
	scanf("%d",&choice);
    
    if(choice==1) {
 	printf("you selected 100MB. Cost=50 KES");
	}
	else if(choice==2){
	printf("you selected 500MB. Cost=200 KES");	
	}
	else if(choice==3) {
	printf("you selected 1GB. Cost=350 KES");	
	}
	else if(choice==4){
	printf("you selected 2GB. Cost=600 KES");	
	}
	
	
	return 0;
}