#include <stdio.h>
#include <stdlib.h>
int main()
{
    char line[255];
    FILE  * fpointer = fopen("employees.txt","r");/*read*/

    fgets(line,255,fpointer);/*fgets reading the (n-1) of the stuffs¤W¤@¦æ*/
    fgets(line,255,fpointer);
    printf("%s",line);

    fclose(fpointer);
  return 0;
}
