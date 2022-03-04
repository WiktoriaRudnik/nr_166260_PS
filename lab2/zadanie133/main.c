#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1,liczba2,liczba3,max;
    printf("podaj 3 liczby\n");
    scanf("%d %d %d",&liczba1,&liczba2,&liczba3);
    if(liczba3>=liczba2)
    {
        if(liczba3>= liczba1)
            max=liczba3;
        else
            max=liczba1;
    }
    if(liczba1>=liczba2)
        {
        if(liczba1>=liczba3)
            max=liczba1;
        else
            max=liczba3;
        }
    if(liczba1==liczba2)
        if(liczba1==liczba3)
            max=liczba3;
    printf("%d",max);
    return 0;
}
