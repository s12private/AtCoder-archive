//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, L; cin>>N>>L;
    ll K; cin>>K;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll l=0, r=L, res = 0;
    while(r-l > 1){
        ll mid = (l+r)/2;
        ll count = 0;
        ll len = 0;
        ll prev = 0;
        rep(i, N){
            len += A[i] - prev;
            if(len >= mid){
                count++;
                len = 0;
            }
            prev = A[i];
        }
        if(L - prev + len >= mid) count++;
        if(count >= K+1){
            l = mid;
            chmax(res, mid);
        }
        else r = mid;
    }
    cout << res << endl;
}