#include <stdio.h>
#include <stdlib.h>
int sgn(double x);
int main()
{
    double liczba;
    scanf("%lf",&liczba);
    printf("%d",sgn(liczba));
}
int sgn(double x)
{
    if(x>0)
        return 1;
    if(x<0)
        return -1;
    if(x==0)
        return 0;
}
