#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> unique_elements; 

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            unique_elements.insert(x); 
        }

        cout << unique_elements.size() << endl;
    }
    return 0;
}
