#include <stdio.h>
#include<stdlib.h>
int main()
{
    char grade='A';

    switch(grade){
    case 'A':
    printf("Good Job!");
    break;
    case 'B':
    printf("Alright.");
    break;
    case 'C':
    printf("Not good enough");
    break;
    case 'D':
    printf("Please study hard.");
    break;
    case 'F':
    printf("Failed");
    break;
    default:
        printf("Invailed Grade");
    }

   return 0;
}
