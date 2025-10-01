//Program that checks if a student is eligible for the final exams
/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/
#include <stdio.h>
int main () {
	float attendance;
	int average_marks;
	
	printf("enter the value of attendance: ");
	scanf("%f",&attendance);
	
	printf("enter your average marks: ");
	scanf("%d",&average_marks);
	
	if (attendance >=0.75 && average_marks >=40){
		printf("you are eligible for the final exams");
	}
	else
	{
		printf("you are not eligible");
	}
	return 0;		
}