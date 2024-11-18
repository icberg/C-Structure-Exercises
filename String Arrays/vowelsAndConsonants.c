#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char sen[201];
    int vowels=0, consonants=0;
    
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")]=0;
    
    for (int i = 0; sen[i] != '\0'; i++) {
        char ch = tolower(sen[i]);

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    
    printf("Sentence \"%s\" has %d vowels and %d consonants.\n", sen, vowels, consonants);

    return 0;
}
