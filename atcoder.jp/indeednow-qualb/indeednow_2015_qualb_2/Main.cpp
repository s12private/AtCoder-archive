#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string s, t; cin>>s>>t;

    if(s == t){
        cout << 0 << endl;
        return 0;
    }
    rep(i, s.size()){
        s = s.back() + s.substr(0, s.size()-1);
        if(s == t){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}