#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n,m;
    int liczba;
    printf("podaj dwie liczby\n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        liczba=n*i;
        printf("%d \n",liczba);
    }
    return 0;
}
