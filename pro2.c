// num1=1000 and num2=500
// num1=500 and num2=1000

#include <stdio.h>

void main()
{
    int num1=200, num2=400;
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("the value of num1 %d",num1);
    printf("\n the value of num2 %d",num2);

}