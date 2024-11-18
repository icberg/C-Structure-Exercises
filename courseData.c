#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    int grade;
    
} student;

int main(void){
    student std[3];
    int totalgrade = 0;
    
    for (int i=0; i<3; i++) {
        scanf("%s",std[i].name);
        scanf("%d",&std[i].id);
        scanf("%d",&std[i].grade);
        
        totalgrade+=std[i].grade;
        
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, ID: %d, Grade: %d\n", std[i].name, std[i].id, std[i].grade);
        }
    double avg= (double)totalgrade/3.0;
    printf("Average of the course is %.2f\n",avg);
    return 0;
}
