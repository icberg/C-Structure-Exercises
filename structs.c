#include <stdio.h>

#define MAX 100

typedef struct {
    int id;
    char name[MAX];
} student;

student fillStudent(void);
void printStudent(student student);

int main(void) {
    student student;
    student = fillStudent();
    printStudent(student);

    return 0;
}

student fillStudent(void) {
    student student;

    printf("\nGive name: ");
    scanf("%s", student.name);

    printf("Give id: ");
    scanf("%d", &student.id);

    return student;
}

void printStudent(student student) {
    printf("\nName: %s", student.name);
    printf("\nID: %d", student.id);
}
