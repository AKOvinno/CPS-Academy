#include<stdio.h>
int main()
{
    int n = 1e6+1;
    char str[n];
    scanf("%s", str);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count += (str[i] - '0');
    }
    printf("%d\n", count);
    return 0;
}
