#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, l, r;
        scanf("%d %d %d %d", &n, &m, &l, &r);
        
        int d = n - m;

        while (d--) {

            if (r > -l) {
                r--;  
            } else {
                l++;  
            }
        }

        printf("%d %d\n", l, r);
    }

    return 0;
}
