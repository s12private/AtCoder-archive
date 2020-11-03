#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    ll N; cin>>N;
    vector<ll> a(N);
    ll sum = 0;
    rep(i, N){
        cin>>a[i];
        sum += a[i];
    }

    if(sum%N != 0){
        cout << "-1" << endl;
        return 0;
    }

    sum /= N;
    ll ans = 0;
    rep(i, N-1){
        if(a[i] == sum) continue;
        a[i+1] += a[i]-sum;
        a[i] = sum;
        ans++;
    }

    cout << ans << endl;
}