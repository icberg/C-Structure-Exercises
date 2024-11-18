#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int calculateWords(char *string);

int main(void) {
    char str[MAX_SIZE];
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    int numWords = calculateWords(str);

    printf("\"%s\" has %d words\n", str, numWords);

    return 0;
}

int calculateWords(char *string) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    return count;
}
