#include<stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if(k < a) {
        a = a - k;
    }
    else if (k == a) {
        a = 0;
    }
    else {
        k = k - a;
        a = 0;
        if(b < k) {
            b = 0;
        }
        else {
            b = b - k;
        }
    }
    printf("%lld %lld\n", a, b);
    return 0;
}
