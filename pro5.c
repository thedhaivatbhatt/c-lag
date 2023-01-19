// exm of modulus-%
// write a program to split one 2digit number into two
// number=56
// frist=5,second=6

#include <stdio.h>

void main()
{
    int number, first, second;
    printf("enter the first num1 :");
    scanf("%d",&number);
    first=number/10;
    second=number%10;
    printf("this is the first ans %d \n this is the second %d", first,second);
}