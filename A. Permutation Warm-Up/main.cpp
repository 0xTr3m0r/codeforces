#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int k = n/2;
        cout << k*(n-k)+1 <<"\n";

    }

    return 0;
}