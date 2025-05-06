#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
    string s, result;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (find(v.begin(), v.end(), c) == v.end()) {
            result += ".";
            result+=c;
        }
            
    }
    cout << result << endl;
    return 0;
}
