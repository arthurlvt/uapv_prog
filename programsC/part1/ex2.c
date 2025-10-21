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
// EXERCICE 4 : Assertions logiques vraies / fausses
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
