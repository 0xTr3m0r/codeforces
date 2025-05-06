#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool reverse(char word[], char word2[]) {
    int n = strlen(word);
    if (strlen(word2) != n) return false;

    for (int i = 0; i < n; i++) {
        if (word[i] != word2[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[101], word1[101];
    scanf("%s",word);
    scanf("%s",word1);
    printf("%s\n", reverse(word, word1) ? "YES" : "NO");
    return 0;
}
