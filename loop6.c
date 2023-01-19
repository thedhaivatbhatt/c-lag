// write a program to find power and exponent
#include <stdio.h>

void main()
{
    int base,power,exponent,count;
    printf("enter value of base ");
    scanf("%d",&base);
    printf("enter the value of power");
    scanf("%d",&power);
    if(power >1 )
    {
        exponent=base*base;
        count=2;
        while (count < power )
        {
            exponent=exponent*base;
            count++;
        }
        printf("exponent is %d",exponent);
    }
    else if (power ==1)
    printf("%d",base);
    else
    {
        printf("invalid choice");
    }
    
printf("\n good bye");

}