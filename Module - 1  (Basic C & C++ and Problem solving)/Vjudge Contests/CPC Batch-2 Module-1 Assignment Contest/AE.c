#include<stdio.h>
int main()
{
    char str[1000001], ch;
    scanf("%s", str);
    int fre[26], odd_flag = 0, odd_num = 0;
    for(int i = 0; i < 26; i++) {
        fre[26] = 0;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        fre[str[i] - 'A']++;
    }
    for(int i = 0; i < 26; i++) {
        if(fre[i] % 2 == 1) {
            odd_flag++;
            ch = i+'A';
            odd_num = fre[i];
        }
    }
    if(odd_flag > 1) {
        printf("NO SOLUTION\n");
        return 0;
    }
    for(int i = 0; i < 26; i++) {
        if(fre[i] > 0 && fre[i] % 2 == 0) {
            int count = fre[i] / 2;
            while(count--) {
                printf("%c", i+'A');
            }
        }
    }
    for(int i = 0; i < odd_num; i++) {
        printf("%c", ch);
    }
    for(int i = 25; i >= 0; i--) {
        if(fre[i] > 0 && fre[i] % 2 == 0) {
            int count = fre[i] / 2;
            while(count--) {
                printf("%c", i+'A');
            }
        }
    }
    printf("\n");
    return 0;
}
