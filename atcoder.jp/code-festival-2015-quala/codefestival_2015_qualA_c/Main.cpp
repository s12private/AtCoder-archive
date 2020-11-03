#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N, T; cin>>N>>T;
    ll sum = 0;
    vector<ll> diff(N);
    rep(i, N){
        ll A, B; cin>>A>>B;
        diff[i] = A-B;
        sum += A;
    }

    sort(diff.begin(), diff.end());

    ll ans = 0;
    while(sum > T){
        if(diff.empty()){
            cout << "-1" << endl;
            return 0;
        }
        sum -= diff.back();
        diff.pop_back();
        ans++;
    }

    cout << ans << endl;
}