#include <stdio.h>

int main(void)
{
    int num[]={1,2,3,4,5};
    int i, input;
    
    scanf("%d",&input);
    
    if(input<1 || input >5){
      printf("Not a valid number");
    }
    else{
      for(i=0;i<5;i++){
        if(num[i]!=input){
          printf("%d ",num[i]);
        }
      }
      printf("\n");
    }
    return 0;
}