#include <stdio.h>

int main(void) {
    int numbers[7] = {0, 2, 4, 6, 8, 10};
    int num, i, j;

    
    scanf("%d", &num);

    if (num < 0 || num > 10) {
        printf("Not a valid number\n");
        return 0;
    }

    
    for (i = 0; i < 6; i++) {
        if (numbers[i] > num) {
            break;
        }
    }

    
    for (j = 6; j > i; j--) {
        numbers[j] = numbers[j - 1];
    }

    
    numbers[i] = num;

    
    for (i = 0; i < 7; i++) {
        printf("%d", numbers[i]);
        if (i < 6) {
            printf(" "); 
        }
    }
    printf("\n");

    return 0;
}
