#include <stdio.h>
#include <stdlib.h>
int main()
{

sayHi("Mike",40);
sayHi("Tom",23);
sayHi("John",30);

    return 0;
}
/* void means that this function isn't to return any informations,void©I¥s¤§·N«ä*/
void sayHi(char name[],int age)
{
printf("Hello %s ,you are %d\n",name,age);

}






