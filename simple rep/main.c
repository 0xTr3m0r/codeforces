#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    if (x == 2) {
        return true;
    }
    if (x % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_y_prime(int x, int k) {
    if (k == 1) {
        return is_prime(x);
    } else {
        if (x == 1 && k == 2) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int x, k;
        scanf("%d %d", &x, &k);
        if (is_y_prime(x, k)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}