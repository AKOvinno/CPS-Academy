#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ara[n][m];
    int vec[m][1];
    int ans[n][1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 1; j++) {
            ans[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 1; j++) {
            scanf("%d", &vec[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 1; j++) {
            for(int k = 0; k < m; k++) {
                ans[i][j] += (ara[i][k] * vec[k][j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 1; j++) {
            printf("%d", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
