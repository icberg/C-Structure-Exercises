#include <stdio.h>

void readNum(int *ptr);
int addNums(int *ptr1, int *ptr2);
void printNums(int *ptr);

int main (void) {

    int num1 = 0, num2 = 0, sum = 0;
    int *ptr1=&num1, *ptr2=&num2, *ptrsum=&sum;

    readNum(ptr1);
    readNum(ptr2);

    sum = addNums(ptr1, ptr2);

    printf("\nFirst number: ");
    printNums(ptr1);
    printf("\nSecond number: ");
    printNums(ptr2);
    printf("\nSum of the numbers: ");
    printNums(ptrsum);

    return(0);
}

void readNum(int *ptr){

    scanf("%d", ptr);
}

int addNums(int *ptr1, int *ptr2){

    int sum = *ptr1 + *ptr2;
    return sum;
}

void printNums(int *ptr){

    printf("%d", *ptr);
}
