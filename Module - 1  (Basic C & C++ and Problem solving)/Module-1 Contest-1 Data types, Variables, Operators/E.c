#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d %lf\n", a/b, a%b, a/(b*1.0));
    return 0;
}
