/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int regno;
    float marks;

    fptr = fopen("C:\\Users\\dope.g00\\Documents\\Projects\\results.dat", "rb");  
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Name\tRegNo\tMarks\n");
    printf("--------------------------\n");

    while (fscanf(fptr, "%s %d %f", name, &regno, &marks) == 3) {
        printf("%s\t%d\t%.2f\n", name, regno, marks);
    }

    fclose(fptr);
    return 0;
}
