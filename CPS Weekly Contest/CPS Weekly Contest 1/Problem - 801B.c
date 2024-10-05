#include<stdio.h>
int main()
{
    char s1[101], s2[102];
    scanf("%s %s", s1, s2);
    for(int i = 0; s1[i] != '\0'; i++) {
        if(s1[i] < s2[i]) {
            printf("-1\n");
            return 0;
        }
    }
    printf("%s\n", s2);
    return 0;
}
