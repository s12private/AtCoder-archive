#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,K,M,R; cin>>N>>K>>M>>R;
    vector<ll> s(N-1);
    rep(i, N-1) cin>>s[i];

    sort(s.rbegin(), s.rend());

    ll sum = 0;
    rep(i, min(K, N-1)){
        sum += s[i];
    }

    if(sum >= R*K){
        cout << 0 << endl;
        return 0;
    }

    sum -= N-1 < K ? 0 : s[K-1];

    if(sum+M < R*K){
        cout << -1 << endl;
        return 0;
    }

    cout << R*K-sum << endl;
}