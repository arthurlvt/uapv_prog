/* GUESS THE NUMBER (BINGO!) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(0));  // Initialize random number generator
    int mysteryNumber = rand() % 100 + 1;  // Number between 1 and 100
    int n = 0, count = 0;

    while (n != mysteryNumber) {
        printf("Guess the number (between 1 and 100): ");
        scanf("%d", &n);
        count++;

        if (n < mysteryNumber) {
            printf("Higher!\n");
        } else if (n > mysteryNumber) {
            printf("Lower!\n");
        } else {
            printf("Congratulations! You found the number in %d attempts.\n", count);
        }
    }
}
