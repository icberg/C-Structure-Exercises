#include <stdio.h>

int main(void)
{
  int numbers[5];
  int sum=0;
  
  for(int i=0;i<5;i++){
    scanf("%d",&numbers[i]);
    sum+=numbers[i];
  }
  printf("The sum of the numbers %d, %d, %d, %d and %d is %d\n", 
           numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], sum);
           

  return 0;
}