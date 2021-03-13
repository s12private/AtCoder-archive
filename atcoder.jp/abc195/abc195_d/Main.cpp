//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, M, Q; cin>>N>>M>>Q;
    vector<ll> W(N), V(N);
    rep(i, N) cin>>W[i]>>V[i];
    vector<ll> X(M);
    rep(i, M) cin>>X[i];

    vector<pair<ll, ll>> a(N);
    rep(i, N) a[i] = make_pair(V[i], W[i]);

    sort(a.rbegin(), a.rend());

    ll mx = 0;
    rep(i, Q){
        ll L,R; cin>>L>>R;
        vector<ll> x;
        rep(j, M){
            if(j+1 >= L && j+1 <= R) continue;
            x.push_back(X[j]);
        }
        sort(x.begin(), x.end());

        ll sum = 0;
        rep(j, N) {
            rep(k, x.size()){
                if (x[k] >= a[j].second){
                    sum += a[j].first;
                    x[k] = 0;
                    break;
                }
            }
        }
        cout << sum << endl;
    }
}