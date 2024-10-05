#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    int first = 0, second = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                first += ara[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i+j) == (n-1)) {
                second += ara[i][j];
            }
        }
    }
    printf("%d\n", abs(first-second));
    return 0;
}
