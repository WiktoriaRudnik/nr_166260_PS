#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("podaj n\n");
    scanf("%d",&n);
    for(int a=1;a<n;++a)
        for(int b=1;b<n;++b)
            for(int c=1;c<n;++c)
                for(int d=1;d<n;++d)
                    if(n==a*a+b*b+c*c+d*d)
                        printf("n mozna zapisac za pomoca kwadratow: %d %d %d %d\n",a,b,c,d);
}
