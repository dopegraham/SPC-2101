#include <stdio.h>

int main(){
	FILE *fptr;
	char title[100];
	
fptr=fopen("C:\\Users\\dope.g00\\Documents\\Projects\\borrowed_books.txt","a");
printf("Enter the book title:",title);
fgets(title, sizeof(title), stdin);

printf("Book title: %s\n",title);
fprintf(fptr,"Book title: %s \n",title);

printf("Title successfully stored");
fclose(fptr);	
	return 0;
}