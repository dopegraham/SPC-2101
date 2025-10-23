//Program to convert temperature to celcius
/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>

float convertToCelsius(float Fahrenheit);

void main(){
float Fahrenheit,Celcius;

printf("Enter temperature in Fahrenheit: ");
scanf("%f",&Fahrenheit);

Celcius=convertToCelsius(Fahrenheit);

printf("the temperature in celcius is %f",Celcius);
	
}

float convertToCelsius(float Fahrenheit) {
float Celcius;

Celcius=(Fahrenheit-32)*(5.0/9.0);

return Celcius;
	
}