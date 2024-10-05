#include<stdio.h>
#include<math.h>
int main()
{
    double radius;
    scanf("%lf", &radius);
    printf("%lf %lf\n", M_PI * radius * radius, 2 * M_PI * radius);
    return 0;
}
