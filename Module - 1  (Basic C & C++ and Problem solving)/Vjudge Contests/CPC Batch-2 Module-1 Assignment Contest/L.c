#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 0 && num != 2 && num != 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
