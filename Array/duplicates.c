#include <stdio.h>

int main(void) {
    int numbers[5];
    int duplicates = 0;

    
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 4; i++) {
        if (numbers[i] == numbers[i + 1]) {
            duplicates++;
        }
    }

    
    printf("There were %d duplicates\n", duplicates);

    return 0;
}
