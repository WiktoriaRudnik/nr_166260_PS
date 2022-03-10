#include <stdio.h>
#include <stdlib.h>
double najmniejsza(double,double,double);
double srednia(double,double,double);
double potega(double,double);
int main()
{
    double x,y,z;
    printf("podaj 3 x y z liczby\n");
    scanf("%lf %lf %lf",&x,&y,&z);
    printf("najmniejsza liczba z 3 to %lf\n",najmniejsza(x,y,z));
    printf("srednia z tych liczb to %lf\n",srednia(x,y,z));
    printf("potega x do y %lf\n",potega(x,y));
    return 0;
}
double najmniejsza(double x,double y,double z)
{
    double min;
    if(x<=y)
    {
        min=x;
        if(x<=z)
            min=x;
        else
            min=z;
    }
    if(y<=x)
    {
        min=y;
        if(y<=z)
            min=y;
        else
            min=z;
    }
    return min;
}
double srednia(double x,double y,double z)
{
    return (x+y+z)/3;
}
double potega(double x,double y)
{
    double wynik=x;
    for(int i=1;i<y;i++)
    {
        wynik=wynik*x;
    }
    return wynik;
}
