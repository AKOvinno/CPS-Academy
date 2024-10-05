#include<stdio.h>
int main()
{
    long long int n, k, min = 1000000001, diff = 0;
    scanf("%lld %lld", &n, &k);
    int flag = 0;
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        if(ara[i] < min) {
            min = ara[i];
        }
    }
    for(int i = 0; i < n; i++) {
        diff += (ara[i] - min);
        int diff_one = ara[i] - min;
        if(diff_one % k != 0) flag = 1;
    }
    if(diff % k == 0 && !flag) {
        printf("%lld\n", diff / k);
    }
    else {
        printf("-1\n");
    }
    return 0;
}
