#include <stdio.h>

void main()
{
    int count=0 ,flash=5,tamp=1;
    while (flash > 0)
    {
        while (count < flash)
        {
            printf("%d",tamp);
        }
        printf("\n");
        count=0;
        flash--;
        tamp++;

        
    }
    
printf("good bye");
}