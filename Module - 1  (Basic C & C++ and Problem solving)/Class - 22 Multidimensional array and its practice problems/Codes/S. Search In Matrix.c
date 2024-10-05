#include<stdio.h>
#include<stdbool.h>
 bool isExists[100123];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int a;
            scanf("%d", &a);
            isExists[a] = true;
        }
    }
    int x;
    scanf("%d", &x);
    if(isExists[x]) printf("will not take number\n");
    else printf("will take number\n");

    return 0;
}
