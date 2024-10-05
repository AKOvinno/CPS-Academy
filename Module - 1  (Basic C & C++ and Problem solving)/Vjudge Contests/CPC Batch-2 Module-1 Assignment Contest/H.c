#include<stdio.h>
int main()
{
    int ara[3], i, j;
    for (i = 0; i < 3; i++) {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < 3; i++) {
        for(j = i+1; j < 3; j++) {
            if (ara[i] > ara[j]) {
                int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    printf("%d %d %d\n", ara[0], ara[1], ara[2]);
    return 0;
}
