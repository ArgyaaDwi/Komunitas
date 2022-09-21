#include <stdio.h>

int main()
{
    int x,z=0;
    printf("Masukkan sebuah bilangan : ");
    scanf("%d",&x);
    for(int y=x; y>0; --y)
    {
        printf(" + %d", y);
        z+=y;
    }
    printf("\nBilangan Tringular dari bilangan %d adalah %d", x,z);
    return 0;
}
