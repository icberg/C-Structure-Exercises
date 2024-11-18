#include <stdio.h>

int main(void){
    int n1,n2,n3,n4,n5,sum;
    int *p1,*p2,*p3,*p4,*p5,*psum;
    
    p1=&n1;
    p2=&n2;
    p3=&n3;
    p4=&n4;
    p5=&n5;
    
    scanf("%d\n%d\n%d\n%d\n%d",&n1,&n2,&n3,&n4,&n5);
    
    sum=*p1+*p2+*p3+*p4+*p5;
    
    psum=&sum;
    
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\nnum4 = %d\nnum5 = %d\nsum = %d\n",*p1,*p2,*p3,*p4,*p5,*psum );
    
    return 0;
}

