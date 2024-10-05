#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int flag = 0;
    for(int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 1;
        }
    }
    if(flag) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
}
