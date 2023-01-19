// write a program to print and accpet marks of 5 student from user
#include <stdio.h>

void main()
{
    int student[5],count=0,total=0;
    // for(count=0;count<5;count++)
    // {
    //     printf("enter mark for student  \n",count);
    //     scanf("%d",&student[count]);
    // }
    for(count=0;count<5;count++)
    {
        printf("mark of student %d are %d \n",count+1,student[count]);
    }
    // for(count=0;count<5;count++)
    // {
    //     total=total+student[count];
    //     printf("\n %d",total);
    // }

}