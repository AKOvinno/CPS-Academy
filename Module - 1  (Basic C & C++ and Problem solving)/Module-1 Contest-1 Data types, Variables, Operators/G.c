#include<stdio.h>
int main()
{
    int abc_input;
    scanf("%d", &abc_input);

    int c = abc_input % 10;
    abc_input /= 10;
    int b = abc_input % 10;
    abc_input /= 10;
    int a = abc_input % 10;
    abc_input /= 10;

    int abc = a * 100 + b * 10 + c;
    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;

    printf("%d\n", abc + bca + cab);

    return 0;
}
