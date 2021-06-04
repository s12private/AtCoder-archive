#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    map<ll, ll> m;
    int n = min(8LL, N);
    for (int bit = 1; bit < (1<<n); bit++) {
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum += A[i];
            }
        }
        if(m[sum%200] != 0){
            vector<ll> x,y;
            rep(i, n){
                if(m[sum%200] & (1<<i)) x.push_back(i+1);
                if(bit & (1<<i)) y.push_back(i+1);
            }

            cout << "Yes" << endl;
            cout << x.size() << endl;
            for(ll a : x) cout << a << endl;
            cout << y.size() << endl;
            for(ll b : y) cout << b << endl;
            return 0;
        }
        m[sum%200] = bit;
    }
    cout << "No" << endl;
}