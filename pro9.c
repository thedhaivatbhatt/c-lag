// millennium years ex 1000,2000,3000,4000
// <,>,!=,<=,>=,==
#include <stdio.h>

void main()
{
    int year;

    printf("enter the any year");
    scanf("%d", &year);
    if (year%1000 == 0)
    {
        printf("it is a millennium year");
    }
    else
    {
        printf("it is not millennium year");
    }
}



