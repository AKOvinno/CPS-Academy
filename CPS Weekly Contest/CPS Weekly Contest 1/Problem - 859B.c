#include<stdio.h>
#include<math.h>
int main()
{
    int n, ans = 0, h;
    scanf("%d", &n);
    int w = sqrt(n);
    if(n % w == 0) {
        h = n/w;
    }
    else {
        h = n/w;
        ans += 2;
    }
    ans += (2 * (h + w));
    printf("%d\n", ans);
    return 0;
}
