#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(int i = 0, j = n-1; i < j; i++, j--) {
        int temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }
    for(int i = 0; i < n; i++) {
        if(i == n-1) {
            printf("%d\n", ara[i]);
            break;
        }
        printf("%d ", ara[i]);
    }
    return 0;
}
