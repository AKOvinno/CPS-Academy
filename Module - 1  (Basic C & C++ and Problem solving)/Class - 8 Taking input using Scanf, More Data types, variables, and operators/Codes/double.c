#include<stdio.h>
int main()
{
    double d = 23.3448484844934544834985;
    float f = 23.3448484844934544834985;

    printf("d = %0.13lf\n", d); // if next value is 5 or greater than 5 then 1 will be added
    printf("f (precision error) = %0.20lf\n", f); // throwing precision error after 6 digits
    printf("d = %0.25lf\n", d); // throwing precision error after 15 digits

    return 0;
}
