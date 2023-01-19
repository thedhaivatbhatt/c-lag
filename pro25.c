// write a program to make using switch case
// -add
// -sub
// -mul
// -div
// -module
// -min
// -max
// -eql
#include <stdio.h>

void main()
{
    int num1,num2,option;
    float ans;
    printf("enter the value of num1");
    scanf("%d",&num1);
    printf("enter the value of num2");
    scanf("%d",&num2);

    printf("enter 1 for add \n enter 2 for sub \n enter 3 for mul \n enter 4 for div \n enter 5 for module \n enter 6 for min \n enter 7 for max \n enter 8 for eql");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        ans=num1+num2;
        printf("your ans is %.2f",ans);
        break;
    case 2:
        ans=num1-num2;
        printf("your ans is %.2f",ans);
        break;
    case 3:
        ans=num1*num2;
        printf("your ans is %.2f",ans);
        break;
    case 4:
        ans = num1 / num2;
        printf("your ans is %f",ans);
        break;
    case 5:
        ans = num1 % num2;
        printf("your ans is %.2f",ans);
        break;
    case 6:
        if(num1<num2)
        {
            printf("num1 is small");
        }
        else if(num2<num1)
        {
            printf("num2 is small");
        }
        break;
    case 7:
        if(num1>num2)
        {
            printf("num1 is big");
        }
        else if(num2>num1)
        {
            printf("num2 is big");
        }
        break;
    case 8:
        if(num1==num2)
        {
            printf("num1 and num2 are same");
        }
        else
        {
            printf("both are not same ");
        }
        break;

    default:
        printf("\n invalid output");
        break;
    }

printf("\ngood bye");
}