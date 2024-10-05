#include<stdio.h>
int a, b; // Declaring Globally for changing the values
void swap()
{
    int tmp = a;
    a = b;
    b = tmp;
    return;
}
int main()
{
    a = 2, b = 3;
    swap();
    printf("a = %d, b = %d", a, b);
    return 0;
}

// Changing values Call by Reference
#include<stdio.h>
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return;
}
int main()
{
    int a = 2, b = 3;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
