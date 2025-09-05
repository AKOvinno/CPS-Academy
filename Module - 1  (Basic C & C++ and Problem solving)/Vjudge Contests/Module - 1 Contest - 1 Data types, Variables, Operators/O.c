#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while(n) {
        if(n % 2 == 0) {
            count++;
        }
        else {
            break;
        }
        n /= 2;
    }
    printf("%d\n", count);
    return 0;
}
