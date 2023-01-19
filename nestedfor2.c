// write a program to menu driven clac. using char

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2;
    float answer;
    char choice = 'c';

    while (choice == 'c')
    {
        printf("\n enter the value of num1");
        scanf("%d", &num1);
        printf("enter the value of num2");
        scanf("%d", &num2);
        printf("\n enter vlaue 1 add");
        printf("\n enter vlaue 2 sub");
        printf("\n enter vlaue 3 mul");
        printf("\n enter vlaue 4 div");
        fflush(stdin);
        scanf("%c",&choice);
        if (choice == '1')
        {
            answer = num1 + num2;
            printf("answer is %f", answer);
        }
        else if (choice == '2')
        {
            answer = num1 - num2;
            printf("answer is %f", answer);
        }
        else if (choice == '3')
        {
            answer = num1 * num2;
            printf("answer is %f", answer);
        }
        else if (choice == '4')
        {
            answer = num1 / num2;
            printf("answer is %f", answer);
        }
        else
        {
            printf("invalid");
            fflush(stdin);
            printf("\nselect your way\n press c for countiune \n ");
            scanf("%c", &choice);
        }
        printf("good bye");
    }
}