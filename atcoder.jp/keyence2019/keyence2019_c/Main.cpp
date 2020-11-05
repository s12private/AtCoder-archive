#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll N; cin>>N;
    vector<ll> A(N), B(N);
    rep(i, N) cin>>A[i];
    rep(i, N) cin>>B[i];

    vector<ll> diff;
    ll sum = 0, ans = 0;
    rep(i, N){
        if(B[i] > A[i]){
            sum += B[i]-A[i];
            ans++;
        }
        else diff.push_back(A[i]-B[i]);
    }

    sort(diff.rbegin(), diff.rend());

    for(ll d : diff){
        if(sum <= 0) break;
        ans++;
        sum -= d;
    }

    cout << (sum > 0 ? -1 : ans) << endl;
}