#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int* p=&a;
    int* q=&a;
    printf("%d",p=q);
    return 0;
}
