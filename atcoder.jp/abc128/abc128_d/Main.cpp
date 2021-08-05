//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,K; cin>>N>>K;
    vector<ll> V(N);
    rep(i, N) cin>>V[i];

    ll res = 0;
    rep(i, K+1){
        rep(j, K-i+1){
            if(i+j > N) continue;
            ll k = K-i-j;
            vector<ll> a;
            ll sum = 0;
            rep(l, i){
                a.push_back(V[l]);
                sum += V[l];
            }
            rep(l,j){
                a.push_back(V[N-l-1]);
                sum += V[N-l-1];
            }
            sort(a.begin(), a.end());
            rep(l, k){
                if(l > (ll)a.size()-1) break;
                if(a[l] > 0) break;
                if(a[l] < 0) sum -= a[l];
            }
            chmax(res, sum);
        }
    }
    cout << res << endl;
}