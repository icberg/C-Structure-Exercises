#include <stdio.h>

#define SIZE 5

void fillArray(int array[], int n);
void printArray(int array[], int n);

int main(void){

   int array[SIZE]={0};

   fillArray(array, SIZE);
   printArray(array, SIZE);

   return(0);
}

void printArray(int array[], int n){

   int i;

   for(i = 0; i < n; i++){
    printf("%d", array[i]);
   }

   printf("\n");

}

void fillArray(int array[], int n){

    for (int i = 0; i <n; i++)
    {
        
        scanf("%d", &array[i]);
    }

   printf("\n");
}