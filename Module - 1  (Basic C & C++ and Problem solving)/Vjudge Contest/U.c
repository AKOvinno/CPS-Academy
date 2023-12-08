#include<stdio.h>
int main()
{
    while(1) {
        int h, w;
        scanf("%d %d", &h, &w);
        if(h == 0 && w == 0) {
            break;
        }
        for(int i = 0; i < w; i++) {
            printf("#");
        }
        printf("\n");
        for(int i = 1; i < h-1; i++) {
            printf("#");
            for(int j = 2; j < w; j++) {
                printf(".");
            }
            printf("#");
            printf("\n");
        }
        for(int i = 0; i < w; i++) {
            printf("#");
        }
        printf("\n\n");
    }
    return 0;
}

