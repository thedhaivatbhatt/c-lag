// bmi cal
// bmi=kg/m2;

#include <stdio.h>

void main()
{
    int cm;
    float weight ,bmi,m;
    printf("this is weight ans: ");
    scanf("%f", &weight);
    printf("this is the cm:");
    scanf("\n %d", &cm);
    m=cm/100;
   bmi=weight/m*m;
    printf("enter the ans :%f", bmi);
}