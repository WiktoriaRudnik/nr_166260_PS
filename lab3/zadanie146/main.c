#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,wynik=1;
    printf("podaj n\n");
    scanf("%d",&n);
    if(n>2)
    {
        for(int i=2;i<=n;i+=2)
        {
            wynik=wynik*i;
        }
    }
    printf("%d",wynik);
    return 0;
}
