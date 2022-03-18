#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=6;
    int* p=&a;
    printf("%d",*p);
    printf("\n%d",&p);
    printf("\n%d",*&p);
    printf("\n%d",&*p);
    printf("\n%d",&a);
    printf("\n%d",*&a);
    return 0;
}
