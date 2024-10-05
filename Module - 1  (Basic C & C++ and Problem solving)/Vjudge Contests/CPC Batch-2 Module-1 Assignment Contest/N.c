#include<stdio.h>
int main()
{
    int num, i = 1;
    while(1) {
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        else {
            printf("Case %d: %d\n", i++, num);
        }
    }
    return 0;
}
