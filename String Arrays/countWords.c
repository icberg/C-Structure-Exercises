#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char input[51];
    int word_count = 0;
    int in_word = 0;


    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        
        if (!isspace(input[i])) {
            if (!in_word) {
                
                word_count++;
                in_word = 1;
            }
        } else {
            
            in_word = 0;
        }
    }

   
    printf("%d\n", word_count);

    return 0;
}
