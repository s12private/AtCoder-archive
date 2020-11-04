#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    string S; cin>>S;
    vector<ll> c(3);
    rep(i, S.size()){
        if(S[i] == 'a') c[0]++;
        if(S[i] == 'b') c[1]++;
        if(S[i] == 'c') c[2]++;
    }

    sort(c.begin(), c.end());

    if(c[2]-c[0] <= 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}