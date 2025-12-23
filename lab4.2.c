#include <stdio.h>

int add(int a, int b) {
    return a + b;       // returns value to caller
}

void printAdd(int a, int b) {
    printf("Sum = %d\n", a + b);   // only prints
}

int main() {
    int result = add(3, 4);   // result stores 7
    printf("Returned value = %d\n", result);

    printAdd(3, 4);           // prints directly

    return 0;
}