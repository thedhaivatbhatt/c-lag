// write a program to findout distence between 2 planets
// https://www.jpl.nasa.gov/edu/pdfs/scaless_reference.pdf
#include <stdio.h>

void main()
{
    int planet1, planet2;
    printf("enter the value of planet1");
    printf("\n enter 1 Mercury");
    printf("\n enter 2 Venus");
    printf("\n enter 3 Earth");
    printf("\n enter 4 Mars");
    printf("\n enter 5 Jupiter");
    printf("\n enter 6 Saturn");
    printf("\n enter 7 Uranus");
    printf("\n enter 8 Neptune");
    scanf("%d", &planet1);
    printf("enter the value of planet2");
    printf("\n enter 1 Mercury ");
    printf("\n enter 2 Venus ");
    printf("\n enter 3 Earth ");
    printf("\n enter 4 Mars ");
    printf("\n enter 5 Jupiter ");
    printf("\n enter 6 Saturn ");
    printf("\n enter 7 Uranus ");
    printf("\n enter 8 Neptune ");
    scanf("%d", &planet2);

    if (planet1==1 && planet2==2)
    {
        planet1=57900000;
        planet2=108200000;
        planet1=planet1-planet2;
        printf("distence Mercury to Venus %d",planet1);

    }
}