/* PART 1 - Ex2: Average of squares from 1 y */
#include <stdio.h>
int main() {
    int, y, somme = 0;
    printf("Enter a value for y (maximum): ");
    scanf("%d" y);
    for (int i = 1; i <= y; i++) {
        somme += i * i;
    }
    
    printf("Average of squares from 1 to %d is %.2f\n Sum of squares is equal to ", n, somme / y);
}

/* PART 1 - Ex2: Factorial of a value */
#include <stdio.h>
int main() {
    int factorial, n;
    printf("Enter an int value to get its factorial: ");
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
}

/* PART 1 - Ex3:  True and False logical assertions */
#include <stdio.h>
int main() {
    int average = 10, grade1 = 6, grade2 = 8, age = 15;

    if (age >= 15 && age < 25) {
        printf("Assertion A true\n");
    } else {
        printf("Assertion A false\n");
    }

    if (age >= 18 || age < 25) {
        printf("Assertion B true\n");
    } else {
        printf("Assertion B false\n");
    }

    if (!(age >= 18) && age < 25) {
        printf("Assertion C true\n");
    } else {
        printf("Assertion C false\n");
    }

    if (average < 10 || grade1 < 7 || grade2 < 7) {
        printf("Assertion D true\n");
    } else {
        printf("Assertion D false\n");
    }

    if ((average < 10 || grade1 < 7) && (average < 10 || grade2 < 7)) {
        printf("Assertion E true\n");
    } else {
        printf("Assertion E false\n");
    }

    if (average < 10 || (grade1 < 7 && grade2 < 7)) {
        printf("Assertion F true\n");
    } else {
        printf("Assertion F false\n");
    }
}

/* PART 1 - Ex4: Farenheit to Celcius Convertissor */
#include <stdio.h>
int main(void) {
    double temp;
    printf("Please enter the temperature in °Fahrenheit: ");
    if (scanf("%lf", &temp) != 1) return 1;
    temp = (temp - 32) * (5.0 / 9.0);
    printf("It's %.2lf Celsius!.\n", temp);
}

/* PART 1 - Ex5: BINGO.c!  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
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

/* EXERCICE 8 - PARTIE B: TRIE DE VALEURS A, B, C */

#include <stdio.h> 
int main(void) {
    int a, b, c;
    printf("Entrez trois valeurs entières (A, B, C): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("L'ordre décroissant est: %d, %d, %d\n", a, b > c ? b : c, b > c ? c : b);
        } else {
            printf("L'ordre décroissant est: %d, %d, %d\n", c, a, b);
        }
    } else {
        if (b > c) {
            printf("L'ordre décroissant est: %d, %d, %d\n", b, a > c ? a : c, a > c ? c : a);
        } else {
            printf("L'ordre décroissant est: %d, %d, %d\n", c, b, a);
        }
    }
}
