#include<stdio.h>
int main()
{
    int n, x, count = 0;
    scanf("%d %d", &n, &x);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int fre[x+1];
    for(int i = 0; i < x+1; i++) {
        fre[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        if(ara[i] < x+1) {
            fre[ara[i]] = 1;
        }
    }
    for(int i = 0; i < x+1; i++) {
        if(i == x && fre[i] == 1) count++;
        else if(i != x && fre[i] == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}
