/* PART 1 - Ex2 : Average of squares from 1 y */
#include <stdio.h>
int main() {
    int n, y, somme = 0;
    printf("Enter a value for y (maximum): ");
    scanf("%d" y);
    for (int i = 1; i <= y; i++) {
        somme += i * i;
    }
    int compteur1 = 0;
    int compteur2 = 0;
    for (int i = 1; i <= 10; i++) {
        if (i <= 5) compteur1++;
        else compteur2++;
    }
    printf("Compteur1: %d, Compteur2: %d\n", compteur1, compteur2);
}
    printf("Average of squares from 1 to %d is %.2f\n Sum of squares is equal to ", n, somme / 15.0);
}

/* PART 1 - Ex2 : Factorial of a value */
#include <stdio.h>
int main() {
    int factorial, n;
    printf("Enter an int value to get its factorial: ");
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
}
