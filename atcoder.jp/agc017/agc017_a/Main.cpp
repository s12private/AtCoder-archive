#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long nCk(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    COMinit();
    ll N, P; cin>>N>>P;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    ll even=0, odd=0;
    rep(i, N){
        if(A[i]%2==0) even++;
        else odd++;
    }

    ll ans = 0;
    if(P == 0){
        for(ll i=0; i<=odd; i+=2){
            ans += nCk(odd, i);
        }
        ans *= pow(2, even);
    }else{
        for(ll i=1; i<=odd; i+=2){
            ans += nCk(odd, i);
        }
        ans *= pow(2, even);
    }
    cout << ans << endl;
}