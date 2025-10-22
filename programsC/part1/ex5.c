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

/* PART 1 - Ex5: SORTING VALUES A, B, C */
#include <stdio.h> 
int main(void) {
    int a, b, c;
    printf("Please enter 3 int values (A, B, C): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("Ascending order: %d, %d, %d\n", a, b > c ? b : c, b > c ? c : b);
        } else {
            printf("ascending order: %d, %d, %d\n", c, a, b);
        }
    } else {
        if (b > c) {
            printf("ascending order: %d, %d, %d\n", b, a > c ? a : c, a > c ? c : a);
        } else {
            printf("ascending order: %d, %d, %d\n", c, b, a);
        }
    }
}

/*PART 1 - Ex5: All divisors of an int */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter an int: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Divisors %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}
