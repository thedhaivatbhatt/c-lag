// write a program to print digit in words only 2 digit number
// number=56;
// five six
#include <stdio.h>

void main()
{
   int number,first,second;
   printf("enter the value of number");
   scanf("%d",&number);

   first=number/10;
   second=number%10;

   if(first==1)
   {
    printf("one");
   }
    if(second==1)
   {
    printf("one");
   }
   else
   {
    printf("zero");
   }

}