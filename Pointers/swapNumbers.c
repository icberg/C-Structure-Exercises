#include <stdio.h>

void swapNumbers(int *num1, int *num2);
int readNumber(void);

int readNumber(void){
    int num;
    scanf("%d",&num);
    return num;
}

void swapNumbers(int *num1, int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}


int main(void){

    int num1, num2;
    int *pnum1, *pnum2;
    
    pnum1=&num1;
    pnum2=&num2;
    
    num1=readNumber();
    num2=readNumber();

    printf("Numbers before swapping num1 = %d, num2 = %d\n", num1, num2);
    
    swapNumbers(pnum1, pnum2);

    printf("Swapped numbers num1 = %d, num2 = %d", *pnum1, *pnum2);

    return 0;
}
