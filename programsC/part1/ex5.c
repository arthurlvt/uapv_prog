/* PART 1 - Ex5: BINGO.c!  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    int randNum = rand() % 10 + 1;
    int valuser = 0;
    int counter_tries = 0;
    while (valuser != randNum) {
        printf("Please enter an int between 1 and 9: ");
        if (scanf("%d", &valuser) != 1) return 1;
        counter_tries++;
        if (valuser < randNum) {
            printf("My number is bigger!!\n");
        } else if (valuser > randNum) {
            printf("My number is smaller!\n");
        } else {
            printf("Congrats! You found %d by %d tries!\n", randNum, counter_tries);
        }
    }
    return 0;
}
