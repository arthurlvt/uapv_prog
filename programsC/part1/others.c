

/* PART 1 - Ex5: SORTING VALUES A, B, C */
#include <stdio.h> 

int main() {
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

int main() {
    int n;
    printf("Enter an int: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Divisors %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}
