#include <stdio.h>
#include <math.h>

int main(){
    double n, m, a;
    scanf("%lf", &n);
    scanf("%lf", &m);
    scanf("%lf", &a);

    long long tiles = (long long)ceil(n/a) * (long long)ceil(m/a);

    printf("%lld\n", tiles);
    return 0;
}
