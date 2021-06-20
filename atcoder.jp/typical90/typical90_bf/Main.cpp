//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N,K; cin>>N>>K;

    vector<ll> a(1e5, -1), b;

    a[N] = 0;
    b.push_back(N);

    ll MOD = 1e5;

    ll z = N;
    ll i = 0;
    while(i < K){
        i++;
        ll sum = 0;
        ll y = 0;
        string s = to_string(z);
        for(char c : s) y += c-'0';
        z = (z + y)%MOD;
        if(a[z] != -1){
            ll num = a[z] + (K-i)%(i-a[z]);
            cout << b[num] << endl;
            return 0;
        }
        a[z] = i;
        b.push_back(z);
    }
    cout << z << endl;
}