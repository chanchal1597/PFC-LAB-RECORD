#include <stdio.h>

int main() {
    int a, b, extra;
    float f;
    char c;
    double d;

    // Input section
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);  
    printf("Enter a double: ");
    scanf("%lf", &d);

    // Display the values
    printf("\nYou entered:\n");
    printf("Integer = %d\n", a);
    printf("Float = %.2f\n", f);
    printf("Character = %c\n", c);
    printf("Double = %.2lf\n", d);

    // Swapping two integers
    printf("\nEnter two integers to swap:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    extra = a;
    a = b;
    b = extra;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}