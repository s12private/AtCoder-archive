#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    vector<pair<ll, ll>> p;
    for(ll i=2; i*i<=N; i++){
        if(N%i != 0) continue;
        ll e = 0;
        while(N%i==0){
            e++;
            N /= i;
        }
        p.push_back({i, e});
    }

    if(N != 1) p.push_back({N, 1});

    ll count = 0;
    for(pair<ll, ll> pair : p){
        ll e = 0;
        while(pair.second > 0){
            e++;
            count++;
            pair.second -= e;
            if(e >= pair.second) break;
        }
    }

    cout << count << endl;
}
