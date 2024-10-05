#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int or = a | b;
    int and = a & b;
    int xor = a ^ b;
    printf("OR = %d\nAND = %d\nXOR = %d\n", or, and, xor);
    return 0;
}
