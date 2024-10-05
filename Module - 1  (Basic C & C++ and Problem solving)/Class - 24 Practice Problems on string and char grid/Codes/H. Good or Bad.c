#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[100001];
        int flag = 0;
        scanf("%s", s);
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') {
                flag = 1;
            }
            else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') {
                flag = 1;
            }
        }
        if(flag) {
            printf("Good\n");
        }
        else {
            printf("Bad\n");
        }
    }
    return 0;
}
