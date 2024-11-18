#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NAME_LENGTH 50
#define MAX_EMPLOYEES 5

// Utility functions
void readCharacterString(char *, int n);
int readInteger(void);
double readDouble(void);
void clearBuffer(void);

typedef struct {
    char name[NAME_LENGTH];
    char title[NAME_LENGTH];
    double salary;
    int id;
} employee;

employee addEmployee(int id);
void modifyEmployee(employee *emp);
void printEmployees(employee employees[], int numberOfEmployees);

int main(void) {
    employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    char choice;

    while (true) {
        printf("Options\n");
        printf("a = add an employee\n");
        printf("m = modify an employee\n");
        printf("p = print employees\n");
        printf("q = EXIT\n");
        printf("Your choice:\n");

        scanf(" %c", &choice);
        clearBuffer();

        if (choice == 'a') {
            if (employeeCount >= MAX_EMPLOYEES) {
                printf("Max count %d reached\n", MAX_EMPLOYEES);
            } else {
                employees[employeeCount] = addEmployee(employeeCount + 1);
                employeeCount++;
            }
        } else if (choice == 'm') {
            if (employeeCount == 0) {
                printf("No employees\n");
            } else {
                printf("Give id:\n");
                int id = readInteger();
                if (id < 1 || id > employeeCount) {
                    printf("No employee with id %d\n", id);
                } else {
                    modifyEmployee(&employees[id - 1]);
                }
            }
        } else if (choice == 'p') {
            printEmployees(employees, employeeCount);
        } else if (choice == 'q') {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Not a valid option\n");
        }
    }

    return 0;
}

employee addEmployee(int id) {
    employee emp;

    printf("Give name:\n");
    readCharacterString(emp.name, NAME_LENGTH);

    printf("Give title:\n");
    readCharacterString(emp.title, NAME_LENGTH);

    printf("Give salary:\n");
    emp.salary = readDouble();

    emp.id = id;
    return emp;
}

void modifyEmployee(employee *emp) {
    printf("%d: %s, %s, %.2f\n", emp->id, emp->name, emp->title, emp->salary);

    printf("Give name:\n");
    char temp[NAME_LENGTH];
    fgets(temp, NAME_LENGTH, stdin);
    if (temp[0] != '\n') {
        temp[strcspn(temp, "\n")] = '\0';
        strncpy(emp->name, temp, NAME_LENGTH);
    }

    printf("Give title:\n");
    fgets(temp, NAME_LENGTH, stdin);
    if (temp[0] != '\n') {
        temp[strcspn(temp, "\n")] = '\0';
        strncpy(emp->title, temp, NAME_LENGTH);
    }

    printf("Give salary:\n");
    fgets(temp, NAME_LENGTH, stdin);
    if (temp[0] != '\n') {
        double salary;
        if (sscanf(temp, "%lf", &salary) == 1) {
            emp->salary = salary;
        }
    }
}

void printEmployees(employee employees[], int numberOfEmployees) {
    if (numberOfEmployees == 0) {
        printf("No employees\n");
        return;
    }

    printf("-----EMPLOYEES-----\n");
    for (int i = 0; i < numberOfEmployees; i++) {
        printf("---EMPLOYEE---\n");
        printf("NAME   : %s\n", employees[i].name);
        printf("TITLE  : %s\n", employees[i].title);
        printf("ID     : %d\n", employees[i].id);
        printf("SALARY : %.2f\n", employees[i].salary);
        printf("\n");
    }
}

void readCharacterString(char str[], int length) {
    fgets(str, length, stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    } else {
        clearBuffer();
    }
}

int readInteger(void) {
    int num;
    char check;
    int status;

    while ((status = scanf("%d%c", &num, &check)) == 0 || (2 == status && check != '\n')) {
        clearBuffer();
    }

    return num;
}

double readDouble(void) {
    double num;
    char check;
    int status;

    while ((status = scanf("%lf%c", &num, &check)) == 0 || (2 == status && check != '\n')) {
        clearBuffer();
    }

    return num;
}

void clearBuffer(void) {
    while (fgetc(stdin) != '\n');
}
