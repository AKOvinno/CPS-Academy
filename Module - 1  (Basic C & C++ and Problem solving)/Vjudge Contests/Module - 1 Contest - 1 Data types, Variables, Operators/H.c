#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a % b == 0) printf("%lld\n", a/b);
    else printf("%lld\n", (a/b)+1);
    return 0;
}
