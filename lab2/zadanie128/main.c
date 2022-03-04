#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1,liczba2,liczba3;
    float srednia;
    printf("podaj 3 liczby\n");
    scanf("%d %d %d", &liczba1, &liczba2, &liczba3);
    srednia=(liczba2+liczba3+liczba1)/3;
    printf("%f",srednia);
    return 0;
}
