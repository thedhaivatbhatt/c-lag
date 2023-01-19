// write a program to findout average and sum for 5 std marks
#include<stdio.h>
void main()
{
    int mark[5],count=0,sum;
    float average;
    for(count=0;count<5;count++)
    {
        printf("\n enter the mark of student %d :",count+1 );
        scanf(" %d",&mark[count]);
    }
    for(count=0 ; count<5; count++)
    {
        printf("\n mark of student %d are %d",count+1,mark[count]);
    }
    sum=0;
     for(count=0 ; count<5; count++)
     {
        sum=sum+mark[count];
     }
     printf("\n total marks are %d",sum);
     average=sum/5;
     printf("\n average of student is %f :",average);
     printf("\n goodbye");

}