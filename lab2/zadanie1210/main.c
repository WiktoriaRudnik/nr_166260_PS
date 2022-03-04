#include <stdio.h>
#include <stdlib.h>

int main()
{
    float licznik,mianownik;
    printf("podaj licznik i mianownik liczby wymiernej\n");
    scanf("%f %f",&licznik,&mianownik);
    float liczba=(licznik/mianownik);
    if(liczba>=0)
        {
        printf("%f",liczba);
        }
    else
        {
        liczba=liczba*-1;
        printf("%f",liczba);
        }
    return 0;
}
