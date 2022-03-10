#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,x=0,abez;
    printf("podaj a b c d\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<0)
        abez=a*(-1);
    else
        abez=a;
    while(!(((abez*x*x)+(b*x)+c)>d))
        x++;
    printf("podpunkt a) %d\n",x);
    x=0;
    while(5*x*x+a*x+b<c)
    {
        x++;
    }
    printf("podpunkt b) %d\n",x);
    x=0;
    while(5*x*x+a*x+b<=c)
    {
        x++;
    }
    printf("podpunkt c) %d\n",x);
    return 0;
}
