// write a program to findout factorial of the given num
#include <stdio.h>

void main()
{
    int number,answer,count;
    printf("enter value of number");
    scanf("%d",&number);
    // number=5;
    // answer=5*4;
    answer=number*(number-1);
    // answer=20;
    count=number-2;
    do
    {
        answer=answer*count;
        count--;

    } while (count>0);
    printf("the value of ans %d",answer);
    // answer=60;
    // answer=answer*2;
    // answer=120;
    // answer=answer*1;
    // answer=120;
    

}