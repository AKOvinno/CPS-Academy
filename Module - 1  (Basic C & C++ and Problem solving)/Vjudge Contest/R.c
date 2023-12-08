#include<stdio.h>
int main()
{
    long long int n, min, max, sum = 0;
    scanf("%lld", &n);
    long long int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &ara[i]);
    }
    min = ara[0];
    max = ara[0];
    for (int i = 0; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
        if(ara[i] < min) {
            min = ara[i];
        }
        sum += ara[i];
    }
    printf("%lld %lld %lld\n", min, max, sum);
    return 0;
}
