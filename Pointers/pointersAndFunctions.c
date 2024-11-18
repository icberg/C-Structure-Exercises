#include <stdio.h>
#include <string.h>

void readString(char *ptr, int len);
void printString(char *ptr);

void readString(char *ptr, int len){
    fgets(ptr, len, stdin);
    for (int i=0; i<len; i++) {
        if (ptr[i]=='\n') {
            ptr[i]='\0';
            break;
        }
    }
}

void printString(char *ptr){
    printf("%s\n",ptr);
}

int main(void){
    char str[101];
    
    readString(str,sizeof(str));
    printString(str);
    
    return 0;
    
}
