#include <bits/stdc++.h>
using namespace std;

int main() {
    string ch = "hello";
    string s;
    cin >> s;
    int j = 0;

    for (int i = 0; i < s.length() && j < ch.length(); i++) {
        if (s[i] == ch[j]) {
            j++;
        }
    }

    cout << (j == ch.length() ? "YES" : "NO") << endl;
    return 0;
}
