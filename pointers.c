#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 30;
    int * pAge = &age; /*�ŧip�O���Vint������,�^�廡��p is a pointer to int*/
    double gpa = 3.4;
    double * pGpa =&gpa;
    char grade = 'A';
    char * pGrade=&grade;

    printf("age's memory address : %p\n",&age);
    return 0;
}
