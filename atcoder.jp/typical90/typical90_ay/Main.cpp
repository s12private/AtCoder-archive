//#define _GLIBCXX_DEBUG
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, K, P; cin>>N>>K>>P;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    vector<vector<ll>> a(N/2+1), b(N-N/2+1);
    int n = N/2;
    for (int bit = 0; bit < (1<<n); bit++) {
        ll sum = 0;
        ll count = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                count++;
                sum += A[i];
            }
        }
        a[count].push_back(sum);
    }
    rep(i, a.size()) {
        sort(a[i].begin(), a[i].end());
    }

    n = N-N/2;
    for (int bit = 0; bit < (1<<n); bit++) {
        ll sum = 0;
        ll count = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                count++;
                sum += A[i+N/2];
            }
        }
        b[count].push_back(sum);
    }
    rep(i, b.size()) {
        sort(b[i].begin(), b[i].end());
    }

    ll res = 0;
    rep(i, a.size()) {
        ll k = K - i;
        if(k < 0 || k >= b.size()) continue;
        rep(j, a[i].size()) {
            ll p = P - a[i][j]+1;
            ll index = lower_bound(b[k].begin(), b[k].end(), p) - b[k].begin();
            res += index;
        }
    }
    cout << res << endl;
}