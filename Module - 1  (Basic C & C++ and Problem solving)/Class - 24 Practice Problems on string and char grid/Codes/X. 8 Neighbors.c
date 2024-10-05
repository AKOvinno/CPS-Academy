#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char str[n][m+1];
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);
    x--;
    y--;
    int flag = 0;
    if(str[x][y+1] == '.' && y < m) {
        flag = 1;
    }
    else if(str[x][y-1] == '.' && y > 0) {
        flag = 1;
    }
    else if(str[x+1][y] == '.' && x < n) {
        flag = 1;
    }
    else if(str[x-1][y] == '.' && x > 0) {
        flag = 1;
    }
    else if(str[x-1][y+1] == '.' && x > 0 && y < m) {
        flag = 1;
    }
    else if(str[x+1][y+1] == '.' && x < n && y < m) {
        flag = 1;
    }
    else if(str[x-1][y-1] == '.' && x > 0 && y > 0) {
        flag = 1;
    }
    else if(str[x+1][y-1] == '.' && x < n && y > 0) {
        flag = 1;
    }
    if(flag) {
        printf("no\n");
    }
    else {
        printf("yes\n");
    }
    return 0;
}
