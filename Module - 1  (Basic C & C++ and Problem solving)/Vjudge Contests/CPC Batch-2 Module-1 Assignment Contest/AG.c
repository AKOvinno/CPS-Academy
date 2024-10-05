#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int b, p, f;
        scanf("%d %d %d", &b, &p, &f);
        int h, c;
        scanf("%d %d", &h, &c);
        int burger_petty = p + f;
        int burger_bun = b / 2;
        int price = 0;
        if(burger_petty <= burger_bun) {
            price = h * p + f * c;
        }
        else if(burger_petty > burger_bun && b > 1) {
            if(h >= c) {
                if(p >= burger_bun) {
                    price += (h * burger_bun);
                }
                else {
                    burger_bun -= p;
                    price += (h * p);
                    price += (burger_bun * c);
                }
            }
            else {
                if(f >= burger_bun) {
                    price += (c * burger_bun);
                }
                else {
                    burger_bun -= f;
                    price += (c * f);
                    price += (burger_bun * h);
                }
            }
        }
        else if(b == 1) {
            price = 0;
        }
        printf("%d\n", price);
    }
    return 0;
}
