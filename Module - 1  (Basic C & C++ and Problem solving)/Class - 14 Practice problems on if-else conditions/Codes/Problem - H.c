#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c) {
        if(b > c) {
            printf("%d %d %d\n", c, b, a);
        }
        else {
            printf("%d %d %d\n", b, c, a);
        }
    }
    else if(b > a && b > c) {
        if(a > c) {
            printf("%d %d %d\n", c, a, b);
        }
        else {
            printf("%d %d %d\n", a, c, b);
        }
    }
    else if(c > a && c > b) {
        if(a > b) {
            printf("%d %d %d\n", b, a, c);
        }
        else {
            printf("%d %d %d\n", a, b, c);
        }
    }
    else if(a == b && b == c) {
        printf("%d %d\n", a, b);
    }
    else if(a == b) {
        if(a > c) {
            printf("%d %d\n", c, b, a);
        }
        else {
            printf("%d %d\n", a, b, c);
        }
    }
    else if(b == c) {
        if(b > a) {
            printf("%d %d\n", a, c, b);
        }
        else {
            printf("%d %d\n", b, c, a);
        }
    }
    else if(a== c) {
        if(a > b) {
            printf("%d %d\n", b, c, a);
        }
        else {
            printf("%d %d\n", a, c, b);
        }
    }
    return 0;
}
