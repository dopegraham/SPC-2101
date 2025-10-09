/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
PROGRAM FOR A NUMBER GUESSING GAME
*/
#include <stdio.h>
int main(){
	int secret_number;
	int guess;
	int attempts=1;
	secret_number=12;
	
	printf("Guess the number (between 1-20): \n");
	printf("Enter your guess: " );
	scanf("%d", &guess);

	while(guess != secret_number){
		if(guess > secret_number){
			printf("Too high!\n");
			}else
			 {
				printf("Too low!\n");
			}
			attempts++;
			printf("Guess again: ");
			scanf("%d", &guess);
	}
	printf("Congratulation!\n");
	printf("You guessed the number in %d attempts!\n", attempts);
	
	return 0;
}