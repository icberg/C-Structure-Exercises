#include<stdio.h>
#include <string.h>

int main(void){
    char str1[201];
    char str2[201];
    
    fgets(str1, sizeof(str1), stdin);
    
    str1[strcspn(str1, "\n")]=0;
    
    fgets(str2, sizeof(str2), stdin);
    
    str2[strcspn(str2, "\n")]=0;
    
    if (strcmp(str1, str2)==0) {
        
        printf("\"%s\" and \"%s\" are the same.\n", str1, str2);
    }
    else{
        printf("\"%s\" and \"%s\" are NOT the same.\n", str1, str2);
    }
}
