#include <stdio.h>
#include <stdlib.h>
int funkcjezmienn(int*,int*);
int main()
{
    int a=20,b=9;
    int* p=&a;
    int* q=&b;
    printf("%d",funkcjezmienn(p,q));
    return 0;
}
int funkcjezmienn(int* p,int* q)
{
    if(*p>*q)
        return *p;
    else
        return *q;
}
