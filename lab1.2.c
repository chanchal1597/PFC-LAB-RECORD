#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is the largest\n", a);
    else
        printf("%d is the largest\n", b);
    
    return 0;
}