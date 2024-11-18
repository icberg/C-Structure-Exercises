
#include <stdio.h>

int main(void) {
    
    int num[5];
    int sum=0;
    
    for (int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    
    printf("%d, %d, %d, %d, %d and ",num[0],num[1],num[2],num[3],num[4]);
    
    sum=num[3]+num[4];
    
    printf("(%d+%d)=%d\n",num[3],num[4],sum);
    return 0;
}
