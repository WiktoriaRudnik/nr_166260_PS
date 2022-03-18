#include <stdio.h>
#include <stdlib.h>
int ciag(int);
int main()
{
    int n;
    printf("daj n wieksze od 0\n");
    scanf("%d",&n);
    if(n>0)
        printf("%d",ciag(n));
    return 0;
}
int ciag(int n)
{
    if(n==0)
        return 1;
    return 2*ciag(n-1)+5;
}
