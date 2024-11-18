#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 101

void readString(char *, int);
void printSmall(char *);
void printCapital(char *);
void readTrash(void);

int main(void) {
    char string[SIZE];

    
    readString(string, SIZE);

    printSmall(string);
    printCapital(string);

    return 0;
}

void readString(char *string, int size) {
    fgets(string, size, stdin);

    // Remove the newline character if present
    if (string[strlen(string) - 1] == '\n')
        string[strlen(string) - 1] = '\0';
    else
        readTrash();
}

void printSmall(char *string) {
    printf("String in small letters is: ");
    for (int i = 0; i < (int)strlen(string); i++) {
        printf("%c", tolower(string[i]));
    }
    printf("\n");
}

void printCapital(char *string) {
    printf("String in capital letters is: ");
    for (int i = 0; i < (int)strlen(string); i++) {
        printf("%c", toupper(string[i]));
    }
    printf("\n");
}

void readTrash(void) {
    while (getchar() != '\n');
}
