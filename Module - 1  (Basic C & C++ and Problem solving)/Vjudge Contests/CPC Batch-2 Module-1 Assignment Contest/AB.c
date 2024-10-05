#include<stdio.h>
int main()
{
    int n, sum = 0, total_sum = 0;
    scanf("%d", &n);
    int ara[n-1];
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    for(int i = 0; i <= n; i++) {
        total_sum += i;
    }
    printf("%d\n", total_sum-sum);
    return 0;
}
