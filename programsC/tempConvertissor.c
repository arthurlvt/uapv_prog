/* Temperature Convertissor */
#include <stdio.h>

int main() {
    double temp;
    printf("Please enter the temperature in °Fahrenheit: ");
    if (scanf("%lf", &temp) != 1) return 1;
    temp = (temp - 32) * (5.0 / 9.0);
    printf("It's %.2lf Celsius!.\n", temp);
}
