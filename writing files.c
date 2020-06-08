#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * fpointer = fopen("employees.txt","a");/*a= attachªþ¥[,w=create a new empty folder*/

    fprintf(fpointer,"\nKelly,customer service");

    fclose(fpointer);

  return 0;
}
