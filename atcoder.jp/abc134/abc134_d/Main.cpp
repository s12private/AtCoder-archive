#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    vector<ll> a(N);
    rep(i, N) cin>>a[i];

    vector<ll> b(N);
    vector<ll> res;
    for(ll i=N-1; i>=0; i--){
        ll sum = 0;
        for(ll j=2; (i+1)*j < N+1; j++){
            ll index = (i+1)*j -1;
            sum += b[index];
        }
        if(sum%2 != a[i]){
            b[i]++;
            res.push_back(i+1);
        }
    }

    cout << res.size() << endl;
    rep(i, res.size()){
        cout << res[i] << (i != res.size()-1 ? " " : "");
    }
    if(res.size() != 0) cout << endl;
}