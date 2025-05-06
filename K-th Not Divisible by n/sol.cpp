#include <bits/stdc++.h>
using namespace std;

void solution(int n, int k) {
    int current = 1;
    while (true) {
        if (current -current/n ==k) {
            cout << current << endl;
            return;
        }
        current++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solution(n, k);
    }
    return 0;
}
