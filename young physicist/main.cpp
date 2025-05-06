#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    vector<int> v={0,0,0};
    while (t--){
        int x,y,z;
        cin >> x >> y >> z;
        v[0]+=x;
        v[1]+=y;
        v[2]+=z;
    }
    for (int i =0;i<3;i++){
        if (v[i]!=0){
            cout << "NO" << endl;
        return 0;
        }
    }
    cout << "YES"<<endl;
    return 0;
}