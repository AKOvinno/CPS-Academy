#include<stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if(a > k)
    {
           a = a - k;
    }
    else if(a <= k && b >= k-a)
    {
           b = b - (k - a);
           a = 0;
    }
    else if(a <= k && b <= k)
    {
           a = 0;
           b = 0;
    }
    printf("%lld %lld\n", a, b);
    return 0;
}
