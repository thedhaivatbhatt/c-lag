// write a program to print following pattern
// 0,1,3,6,10,15,21,28,36,45,55,....1000
// 0 1 2 3 4 5
#include <stdio.h>

void main()
{
    int number = 0, tamp = 1;
    printf("%d", number);
    for (tamp = 1; number < 990; tamp++)
    {
        number = number + tamp;
        printf(" %d", number);
    }

    // number = number + tamp;
    // printf("%d", number);
    //    tamp=tamp+1;
    //    number=number+tamp;
    //    printf("%d",number);
    //    tamp=tamp+1;
    // number = number + tamp;
    //    printf("%d",number);
    //    tamp=tamp+1;
    // number=number+tamp;
    //    printf("%d",number);
    //    tamp=tamp+1;
}