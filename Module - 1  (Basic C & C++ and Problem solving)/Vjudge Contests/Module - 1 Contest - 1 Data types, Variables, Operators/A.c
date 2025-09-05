#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int a = X % 10;
    X /= 10;
    int b = X % 10;
    printf("K%d%d\n", b, a);
    return 0;
}
