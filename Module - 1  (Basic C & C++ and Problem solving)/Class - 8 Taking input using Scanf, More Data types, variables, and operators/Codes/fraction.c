#include<stdio.h>
int main()
{
    int a = 10; // if both a and b int type then won't get double in c. Minimum one have to be double.
    int b = 3;
    double c = a / (double)b; // double c = a / (1.0 * b); we can also do it to make it double
    printf("%0.5lf\n", c);
    return 0;
}
