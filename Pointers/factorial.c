#include <stdio.h>

void calculateFactorial(int num, int *factorial);

int main(void) {
    int num, factorial;

    scanf("%d", &num);

    calculateFactorial(num, &factorial);

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}

void calculateFactorial(int num, int *factorial) {
    *factorial = 1;
    for (int i = 1; i <= num; i++) {
        *factorial *= i;
    }
}
