#include<stdio.h>
int main()
{
    int n, output;
    scanf("%d", &n);
    int ara_size = (4 * n) - 1;
    int ara[ara_size];
    for(int i = 0; i < ara_size; i++) {
        scanf("%d", &ara[i]);
    }
    int fre[n+1];
    for(int i = 0; i <= n; i++) {
        fre[i] = 0;
    }
    for(int i = 0; i < ara_size; i++) {
        fre[ara[i]]++;
    }
    for(int i = 1; i < n+1; i++) {
        if(fre[i] != 4) {
            output = i;
        }
    }
    printf("%d\n", output);
    return 0;
}

