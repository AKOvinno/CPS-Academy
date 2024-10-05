#include<stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%d ", (int)a/(int)b);
    printf("%d ", (int)a%(int)b);
    printf("%.5f", a/b);
    return 0;
}
