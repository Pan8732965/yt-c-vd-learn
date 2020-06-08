#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 30;
    int * pAge = &age; /*宣告p是指向int的指標,英文說成p is a pointer to int*/
    double gpa = 3.4;
    double * pGpa =&gpa;
    char grade = 'A';
    char * pGrade=&grade;

    printf("age's memory address : %p\n",&age);
    return 0;
}
