#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    if(n == 0 || n== 1)
        return n;

    else
        return(n*f(n-1));
}


int main(void)
{
    int x;

    printf("Bir sayi giriniz: ");
    scanf("%d", &x);

    printf("%d sayisinin faktoriyeli: %d", x, f(x));

    return 0;

}
