// num1=1000 and num2=500
// num1=500 and num2=1000
#include <stdio.h>

void main()
{
    int num1, num2, tamp;
    printf("enter the value num1 ");
    scanf("%d", &num1);
    printf("enter the value num2 :");
    scanf("%d", &num2);
    tamp = num1;
    num1 = num2;
    num2 = tamp;

    printf("enter the value num1 :%d", num1);
    printf("\n enter the value of num2:%d", num2);
}
