#include<stdio.h>
    // Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;   // Not prime
    }
    return 1;           // Prime
}
    // Function to calculate factorial
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling the prime function
    if (isPrime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    // Calling the factorial function
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}