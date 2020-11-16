#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M; cin>>N>>M;
    vector<vector<ll>> f(N);
    rep(i, M){
        ll A, B; cin>>A>>B;
        A--, B--;
        f[A].push_back(B);
        f[B].push_back(A);
    }

    rep(i, N){
        set<ll> s;
        for(auto ff : f[i]){
            for(auto fff : f[ff]){
                if(fff != i) s.insert(fff);
            }
        }
        ll count = s.size();
        for(auto ff : f[i]){
            if(s.count(ff) != 0) count--;
        }
        cout << count << endl;
    }
}