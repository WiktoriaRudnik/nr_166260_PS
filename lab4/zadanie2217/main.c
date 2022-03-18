#include <stdio.h>
#include <stdlib.h>

void funkcjaconiejestfunkcja();
int main()
{

    int n;
    printf("podaj jakis n tylko ostroznie\n");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        funkcjaconiejestfunkcja();
    }
    return 0;
}
void funkcjaconiejestfunkcja()
{
    static unsigned int licznikwyk=0;
    licznikwyk++;
    printf("%d\n",licznikwyk);
}
