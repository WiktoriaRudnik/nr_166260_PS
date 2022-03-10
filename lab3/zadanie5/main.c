#include <stdio.h>
#include <stdlib.h>
void od1don(int);
void doskonale(int);
void podzielnikipierwsze(int);
int fibonaczi(int);
void czydasie(int);
int main()
{
    int n;
    printf("podaj n\n");
    scanf("%d",&n);
    //od1don(n);
    //doskonale(n);
    //podzielnikipierwsze(n);
    //printf("%d",fibonaczi(n));
    czydasie(n);
    return 0;
}
void od1don(int n)
{
    int pierwsza=1;
    for(int i=2;i<n;i++)
    {
        pierwsza=1;
        for(int b=2;b<=i/2;++b)
        {
            if(i%b==0)
            {
                pierwsza=0;
                break;
            }
        }
        if(pierwsza==1)
            printf("%d \n",i);
    }
}
void doskonale(int n)
{
    for(int x=1;x<n;++x)
    {
        int suma=0;
        for(int i=1;i<x;++i)
        {
            if(x%i==0)
                suma+=i;
        }
        if(suma==x)
            printf("%d\n",suma);
    }
}
void podzielnikipierwsze(int n)
{
    int pierwsza=1;
    for(int i=2;i<n;i++)
    {
        pierwsza=1;
        for(int b=2;b<=i/2;++b)
        {
            if(i%b==0)
            {
                pierwsza=0;
                break;
            }
        }
        if((pierwsza==1)&&(n%i==0))
            printf("%d \n",i);
    }
}
int fibonaczi(int n)
    {
    int n1=0,n2=1,n3=1;
    while((n1<n)&&(n2<n)&&(n3<n))
    {
        n3=n1+n2;
        n1=n3+n2;
        n2=n3+n1;
    }
    if(n2<n)
        return n2;
    if(n1<n)
        return n1;
    if(n3<n)
        return n3;
}
void czydasie(int n)
{
for(int a=1;a<n;++a)
    for(int b=1;b<n;++b)
        for(int c=1;c<n;++c)
            if(n==a*a+b*b+c*c)
                printf("n mozna zapisac za pomoca kwadratow: %d %d %d\n",a,b,c);
}
