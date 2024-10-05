#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, max = 0, count = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            if(ara[i] > max) {
                max = ara[i];
            }
        }
        int fre[max+1];
        for(int i = 0; i < max+1; i++) {
            fre[i] = 0;
        }
        for(int i = n-1; i >= 0; i--) {
            if(!fre[ara[i]]) {
               fre[ara[i]] = 1;
            }
            else {
                break;
            }
            count++;
        }
        printf("%d\n", n-count);
    }
    return 0;
}
