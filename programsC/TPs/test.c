/* Factorial Function */
void factorial(int n)
{
    for(int i = 1; i <= n; i++) {
        n *= i;
    }
}
int main() 
{
    int n;
    printf("Please enter an integer to compute its factorial:\n");
    scanf("%d", &n);
    factorial(n);
}