#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int c = num % 10;
    num /= 10;
    int b = num % 10;
    num /= 10;
    int a = num;
    int number1 = 100*a + 10*b + c, number2 = 100*b + 10*c + a, number3 = 100*c + 10*a + b;
    printf("%d", number1 + number2 + number3);
    return 0;
}
