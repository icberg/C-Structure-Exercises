#include <stdio.h>
#include <string.h>

typedef struct{
    char name[30];
    double price;
    int shelf;
} product;

int main(void){
    product p;
    scanf("%s",p.name);
    scanf("%lf",&p.price);
    scanf("%d",&p.shelf);
    
    printf("name: %s\n", p.name);
    printf("price: %.2f\n", p.price);
    printf("shelf: %d\n", p.shelf);
    
    return 0;
}

