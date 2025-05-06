#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canGenerate(char* p, char* s) {
    int p_len = strlen(p);
    int s_len = strlen(s);

    if (s_len < p_len || s_len > 2 * p_len) {
        return false;
    }

    int i = 0, j = 0;
    while (i < p_len && j < s_len) {
        if (p[i] != s[j]) {
            return false;
        }
        char current = p[i];
        int p_run = 0;
        while (i < p_len && p[i] == current) {
            p_run++;
            i++;
        }
        int s_run = 0;
        while (j < s_len && s[j] == current) {
            s_run++;
            j++;
        }
        if (s_run < p_run || s_run > 2 * p_run) {
            return false;
        }
    }
    return (i == p_len && j == s_len);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char p[200001], s[200001];
        scanf("%s", p);
        scanf("%s", s);
        
        if (canGenerate(p, s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}