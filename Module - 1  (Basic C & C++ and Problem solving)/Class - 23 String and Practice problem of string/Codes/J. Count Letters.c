#include<stdio.h>
char str[10000001];
int main()
{
    scanf("%s", str);
    int fre[26];
    for(int i = 0; i < 26; i++) {
        fre[i] = 0;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        fre[str[i]-97]++;
    }
    for(int i = 0; i < 26; i++) {
        if(fre[i] > 0) {
            printf("%c : %d\n", i+97, fre[i]);
        }
    }
    return 0;
}
