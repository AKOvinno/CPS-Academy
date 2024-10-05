#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num, count = 0, maxX = 0, minX = 0, maxY = 0, minY = 0;
        scanf("%d", &num);
        while(num--) {
            int x, y;
            scanf("%d %d", &x, &y);
            if(x > 0 && y == 0 && x > maxX) {
                maxX = x;
            }
            if(x < 0 && y == 0 && x < minX) {
                minX = x;
            }
            if(x == 0 && y > 0 && y > maxY) {
                maxY = y;
            }
            if(x == 0 && y < 0 && y < minY) {
                minY = y;
            }
        }
        count = 2 * (maxX + maxY - minX - minY);
        printf("%d\n", count);
    }
    return 0;
}
