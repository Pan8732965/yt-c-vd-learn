#include <stdio.h>
#include <stdlib.h>

double addNumber(double x, double y) {
    return x+y;
}

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number\n:");
    
    scanf("%lf",&num1);
    printf("Enter the operator\n:");
    scanf(" %c",&op);
    printf("Enter the second number\n:");
    scanf("%lf",&num2);

    if(op == '+'){
        double ret1= addNumber(num1, num2);        
        printf("%f",ret1);
    }else if(op == '-'){
        printf("%f",num1-num2);
    }else if(op == '*'){
        printf("%f",num1*num2);
    }else if(op == '/'){
        printf("%f",num1/num2);
    }else{
        printf("Invalid Operator\nQAQ");
    }
    return 0;
}



/*
double getResult(double x, double y, char op)
{
    if(op == '+') {
         return x+y;
    }else if(op == '-') {
        return x-y;
    }else if(op == '*'){
        return x*y; 
        
    }else if(op == '/'){
        printf("%f",num1/num2);
    }else{
        printf("Invalid Operator\nQAQ");
    }
}
*/
