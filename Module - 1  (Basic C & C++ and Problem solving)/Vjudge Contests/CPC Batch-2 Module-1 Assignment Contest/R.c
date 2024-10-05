#include<stdio.h>
int main()
{
    long long int n, min = 1e6, max = -1e6, sum = 0, num;
    scanf("%lld", &n);
    long long int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &num);
        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
        sum += num;
    }
    printf("%lld %lld %lld\n", min, max, sum);
    return 0;
}
