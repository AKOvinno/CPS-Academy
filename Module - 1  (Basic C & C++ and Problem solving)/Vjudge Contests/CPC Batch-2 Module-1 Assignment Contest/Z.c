#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int s[14], h[14], c[14], d[14];
    for(int i = 0; i < 14; i++) {
        s[i] = 0;
        h[i] = 0;
        c[i] = 0;
        d[i] = 0;
    }
    while(t--) {
        char ch;
        int num;
        getchar();
        scanf("%c %d", &ch, &num);
        if(ch == 'S') {
            s[num] = 1;
        }
        else if(ch == 'H') {
            h[num] = 1;
        }
        else if(ch == 'C') {
            c[num] = 1;
        }
        else if(ch == 'D') {
            d[num] = 1;
        }
    }
    for(int i = 1; i < 14; i++) {
        if(s[i] == 0) {
            printf("%c %d\n", 'S', i);
        }
    }
    for(int i = 1; i < 14; i++) {
        if(h[i] == 0) {
            printf("%c %d\n", 'H', i);
        }
    }
    for(int i = 1; i < 14; i++) {
        if(c[i] == 0) {
            printf("%c %d\n", 'C', i);
        }
    }
    for(int i = 1; i < 14; i++) {
        if(d[i] == 0) {
            printf("%c %d\n", 'D', i);
        }
    }
    return 0;
}
