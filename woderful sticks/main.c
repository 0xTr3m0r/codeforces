#include <stdio.h>
#include <string.h>

void solution(int n, char* s, int* result) {
    int left = 0, right = n - 1;

    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            result[i + 1] = left + 1;
            left++;
        } else {
            result[i + 1] = right + 1;
            right--;
        }
    }
    result[0] = left + 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int result[n];
        solution(n, s, result);
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    return 0;
}