#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("%d %d\n", num/2, num-(num/2));
    }
    return 0;
}
