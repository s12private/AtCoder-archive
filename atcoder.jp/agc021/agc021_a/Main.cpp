#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;

    ll sum = 0;
    for(char c : to_string(N)) sum += c-'0';
    ll mx = sum;
    rep(i, to_string(N).size()){
        ll a = (ll)N/(ll)pow(10, i) * (ll)pow(10, i) - (ll)1;
        sum = 0;
        for(char c : to_string(a)) sum += c-'0';
        mx = max(sum, mx);
    }
    cout << mx << endl;
}