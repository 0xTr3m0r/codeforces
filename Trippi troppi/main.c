#include <stdio.h>
#include <string.h>

void solution(char* s, char* result) {
    int r = 0;
    if (s[0] != '\0') {
        result[r++] = s[0];
    }

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] != '\0') {
            result[r++] = s[i + 1];
        }
    }

    result[r] = '\0';  // null-terminate the result
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();  // consume newline after number

    for (int i = 0; i < t; i++) {
        char s[101];  // supports up to 100 characters
        fgets(s, sizeof(s), stdin);
        
        // Remove trailing newline if present
        s[strcspn(s, "\n")] = '\0';

        char result[101];
        solution(s, result);
        printf("%s\n", result);
    }

    return 0;
}
