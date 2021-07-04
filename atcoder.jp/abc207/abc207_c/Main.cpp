//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;

    vector<pair<ll, ll>> a(N);
    rep(i, N){
        ll t,l,r; cin>>t>>l>>r;
        if(t == 1){
            a[i].first = l*2;
            a[i].second = r*2;
        }
        if(t == 2){
            a[i].first = l*2;
            a[i].second = r*2-1;
        }
        if(t == 3){
            a[i].first = l*2+1;
            a[i].second = r*2;
        }
        if(t == 4){
            a[i].first = l*2+1;
            a[i].second = r*2-1;
        }
    }

    ll res = 0;
    rep(i, N){
        for(ll j=i+1; j<N; j++){
            if(a[j].first >= a[i].first && a[j].first <= a[i].second || a[j].second >= a[i].first && a[j].second <= a[i].second){
                res++;
            }else if(a[i].first >= a[j].first && a[i].first <= a[j].second || a[i].second >= a[j].first && a[i].second <= a[j].second){
                res++;
            }
        }
    }
    cout << res << endl;
}