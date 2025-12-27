#include <stdio.h>

int main() {
    int num, a, b, c, choice;
    float n1, n2, result;
    char op;

    // 1. Odd / Even using if-else
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    // 2. Maximum of three numbers (nested if)
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            printf("Largest = %d\n", a);
        else
            printf("Largest = %d\n", c);
    } else {
        if (b > c)
            printf("Largest = %d\n", b);
        else
            printf("Largest = %d\n", c);
    }

    // 3. Ternary Operator Example
    printf("\nEnter two numbers for ternary check: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is greater\n", a) : printf("%d is greater\n", b);

    // 4. Simple Calculator (Switch-Case)
    printf("\nSimple Calculator\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = n1 + n2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (n2 != 0)
                result = n1 / n2;
            else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}