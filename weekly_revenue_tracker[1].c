/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
*/

#include <stdio.h>

int main() {
    int revenue[7] ;
    int i;
    int sum = 0;
    float average;
    
    for(i=0; i<7; i++){
     printf("enter the daily income ");
     scanf("%d",&revenue[i]);
    }

    for (i = 0; i < 7; i++) {
        sum = sum + revenue[i];
        average =sum/7;
    }

    printf("Total weekly income = %d\n", sum);
    printf("Total average revenue =%f\n",average);

    return 0;
}