#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> box(N, 1);
    vector<ll> red(N, false);
    red[0] = true;
    rep(i, M){
        ll x, y; cin>>x>>y;
        x--, y--;
        if(box[x] > 0){
            box[x]--, box[y]++;
            if(red[x]){
                red[y] = true;
            }
            if(box[x] == 0){
                red[x] = 0;
            }
        }
    }

    ll count = 0;
    rep(i, N){
        if(red[i]) count++;
    }

    cout << count << endl;
}