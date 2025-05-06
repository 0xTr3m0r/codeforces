#include <stdio.h>
#include <string.h>

int used[1605];
int p[1605];

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int G[n][n];
        int maxLen = 2 * n;
        memset(p, -1, sizeof(int) * (maxLen + 1));
        memset(used, 0, sizeof(int) * (maxLen + 1));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                scanf("%d", &x);
                int pos = i + j + 2; // 1-based
                if (p[pos] == -1) {
                    p[pos] = x;
                    used[x] = 1;
                }
            }
        }

        // Find the missing number (not used yet)
        int missing_num = -1;
        for (int i = 1; i <= 2 * n; i++) {
            if (!used[i]) {
                missing_num = i;
                break;
            }
        }

        // Find the missing position in p[]
        for (int i = 1; i <= 2 * n; i++) {
            if (p[i] == -1) {
                p[i] = missing_num;
                break;
            }
        }

        // Output the permutation
        for (int i = 1; i <= 2 * n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
