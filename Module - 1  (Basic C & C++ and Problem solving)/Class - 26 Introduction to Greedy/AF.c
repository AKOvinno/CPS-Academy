#include<stdio.h>
int main()
{
    char str[19];
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        int num = str[i] - '0';
        if(num > 4 && num < 9) {
            num = 9 - num;
            str[i] = num + '0';
        }
        if(num == 9 && i != 0) {
            num = 0;
            str[i] = '0';
        }
    }
    printf("%s\n", str);
    return 0;
}
