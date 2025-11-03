/* GreaterThan Function */
#include <stdbool.h>
bool GreaterThan(int a, int b)
{
    return a > b;
}
int main()
{
    int x, y;
    printf("Please enter two integers to compare: ");
    scanf("%d %d", &x, &y);
    if (GreaterThan(x, y)) {
        printf("%d is > %d\n", x, y);
    } else {
        printf("%d is < than %d\n", x, y);
    }
}

/* Factorial Function */
#include <stdio.h>
void factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    printf("The factorial of %d is %d\n", x, result);
}

int main()
{
    int n;
    printf("Please enter an integer to compute its factorial: ");
    scanf("%d", &n);
    factorial(n);
}

/* Taxes Function */
#include <stdio.h>
void addMargin(double *price)
{
    *price += *price * 0.3;
}

void addVAT(double *priceMarged)
{
    *priceMarged += *priceMarged * 0.2;
}

void addEcoTax(double *priceVated) {
    *priceVated += 1.5;
}

void getPriceWithTaxes(double *basePrice)
{
    addMargin(basePrice);
    addVAT(basePrice);
    addEcoTax(basePrice);
}
int main()
{
    double price;
    printf("Please enter the base price: ");
    scanf("%lf", &price);
    getPriceWithTaxes(&price);
    printf("The final price with taxes is: %.2lf\n", price);
}