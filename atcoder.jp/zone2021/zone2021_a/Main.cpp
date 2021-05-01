#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S; cin>>S;
    ll res = 0;
    if(S.size() <= 3){
        cout << 0 << endl;
        return 0;
    }
    for(ll i=0; i<S.size()-3; i++){
        string a = S.substr(i, 4);
        if(a == "ZONe") res++;
    }
    cout << res << endl;
}