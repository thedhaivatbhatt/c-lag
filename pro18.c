// write a program to make cal.
// given below option
// add
// sub
// mul
// div
// modulas
// min
// max
// equality
#include <stdio.h>

void main()
{
    int a,b,answer,option;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("\n enter the value 1 add");
    printf("\n enter the value 2 sub");
    printf("\n enter the value 3 mul");
    printf("\n enter the value 4 div");
    printf("\n enter the value 5 modulas");
    printf("\n enter the value 6 min");
    printf("\n enter the value 7 max");
    printf("\n enter the value 8 equality");
    printf("\n select any one option from above");
    scanf("%d",&option);
    if (option==1)
    {
        answer=a+b;
        printf("the value of add%d",answer);
    }

    

}