#include <stdio.h>

int main() {
    
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    int month_number;

    
    
    scanf("%d", &month_number);

    
    if (month_number >= 1 && month_number <= 12) {
        printf("%s\n", months[month_number - 1]);
    } else {
        printf("Not a valid month!\n");
    }

    return 0;
}
