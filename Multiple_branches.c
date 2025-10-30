/*
NAME:Graham wafula
REG NO:PA106/G/28759/25
 */   
#include <stdio.h>

int main() {
    int chain[3][5][10] = {
        {  
            {1, 0, 1, 1, 0, 1, 0, 1, 1, 0}, 
            {1, 1, 0, 0, 1, 1, 0, 1, 0, 1}, 
            {0, 0, 1, 1, 0, 1, 1, 0, 0, 1},
            {1, 0, 0, 1, 1, 1, 0, 1, 1, 0},
            {0, 1, 1, 1, 0, 0, 1, 1, 1, 0}  
        },
        {  
            {1, 1, 1, 0, 1, 0, 1, 0, 1, 0},  
            {0, 0, 1, 1, 0, 1, 0, 1, 1, 0},  
            {1, 1, 0, 1, 1, 1, 0, 1, 0, 0},  
            {0, 1, 1, 1, 0, 0, 1, 1, 0, 1}, 
            {1, 0, 0, 0, 1, 1, 1, 0, 1, 1}   
        },
        { 
            {0, 1, 0, 1, 1, 0, 0, 1, 0, 1},
            {1, 0, 1, 0, 1, 0, 1, 1, 0, 0}, 
            {1, 1, 1, 1, 0, 1, 0, 0, 1, 0}, 
            {0, 0, 1, 1, 0, 1, 1, 0, 0, 1},  
            {1, 1, 0, 0, 1, 1, 0, 1, 1, 0}  
        }
    };

    int branch, floor, room;
    int totalOccupied = 0, totalVacant = 0;

    for (branch = 0; branch < 3; branch++) {
        printf("\nBranch %d \n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            int occupied = 0, vacant = 0;
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }
            totalOccupied += occupied;
            totalVacant += vacant;
            printf("Floor %d: Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
        }
    }

    printf("\nHotel Chain Summary \n");
    printf("Total occupied rooms: %d\n", totalOccupied);
    printf("Total vacant rooms: %d\n", totalVacant);
    printf("Total rooms in all branches: %d\n", totalOccupied + totalVacant);

    return 0;

}
