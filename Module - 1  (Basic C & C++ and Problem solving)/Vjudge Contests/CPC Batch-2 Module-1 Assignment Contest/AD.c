#include<stdio.h>
int main()
{
    int l, r, i, j;
    scanf("%d %d", &l, &r);
    char s[100001];
    scanf("%s", s);
    for(i = l, j = r; i < j; i++, j--) {
        char temp = s[i-1];
        s[i-1] = s[j-1];
        s[j-1] = temp;
    }
    printf("%s\n", s);
    return 0;
}
