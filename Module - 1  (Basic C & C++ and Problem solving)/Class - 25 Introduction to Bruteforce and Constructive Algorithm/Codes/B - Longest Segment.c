#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double len = 0.0;
    scanf("%d", &n);
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            double ans = sqrt ( (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if(ans > len) {
                len = ans;
            }
        }
    }
    printf("%.10lf\n", len);
    return 0;
}
