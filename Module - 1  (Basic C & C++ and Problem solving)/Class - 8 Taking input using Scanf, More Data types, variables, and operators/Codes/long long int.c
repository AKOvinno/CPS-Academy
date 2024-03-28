#include<stdio.h>
int main()
{
    long long int a = 1234567890, b = 1234567890;
    long long int sum = a+b;
    printf("a = %lld\n", a);
    printf("b = %lld\n", b);
    printf("Sum = %lld\n", sum);

    unsigned int c = 4000000000;
    printf("c = %u\n", c);

    // Below case won't print the exact value
    int d = 4000000000;
    printf("c = %d\n", d);

    return 0;
}
