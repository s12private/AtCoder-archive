#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string s; cin>>s;
    string k = "keyence";
    rep(i, s.size()){
        rep(j, s.size()){
            string t = s.substr(0, i) + s.substr(j+1);
            if(t == k){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}