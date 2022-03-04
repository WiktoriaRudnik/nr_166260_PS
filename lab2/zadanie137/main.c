#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;
    printf("podaj 3 wspolczynniki rownania kwadratowego\n");
    scanf("%f %f %f",&a,&b,&c);
    delta=(b*b)-4*a*c;
    if(delta==0)
    {
        x1=((b*-1)/2*a);
        printf("jest jedno rozwiazanie x1=");
        printf("%f",x1);
    }
    if(delta<0)
        printf("brak rozwiazan");
    if(delta>0)
    {
        x1=(((b*-1)-sqrt(delta))/2*a);
        x2=(((b*-1)+sqrt(delta))/2*a);
        printf("sa dwa rozwiazania x1=");
        printf("%f",x1);
        printf(" i x2=");
        printf("%f",x2);
    }
    return 0;
}
