#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int one = pow(a, b);
    int two = pow(b, a);
    printf("%d\n", one+two);
    return 0;
}
