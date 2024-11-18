#include <stdio.h>
#include <string.h>

int main() {
    char input[201];
    int count[26] = {0};

   
  
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = 0;

    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            count[input[i] - 'a']++;
        }
    }

    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            int index = input[i] - 'a';
            if (count[index] > 0) {
                printf("%c %d\n", input[i], count[index]);
                count[index] = 0;
            }
        }
    }

    return 0;
}

