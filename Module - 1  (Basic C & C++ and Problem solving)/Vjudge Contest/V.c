#include<stdio.h>
int main()
{
    int i, j;
    while(1) {
        int h, w;
        scanf("%d %d", &h, &w);
        if(h == 0 && w == 0) {
            break;
        }
        for(i = 1; i <= h; i++) {
            if(i % 2 == 1) {
                for(j = 1; j <= w; j++) {
                    if(j % 2 == 1) {
                        printf("#");
                    }
                    else if(j % 2 == 0) {
                        printf(".");
                    }
                }
                printf("\n");
            }
            else if(i % 2 == 0) {
                for(j = 1; j <= w; j++) {
                    if(j % 2 == 1) {
                        printf(".");
                    }
                    else if(j % 2 == 0) {
                        printf("#");
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}
