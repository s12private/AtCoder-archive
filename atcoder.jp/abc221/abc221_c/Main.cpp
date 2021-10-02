//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string N; cin>>N;

    int n = N.size();
    ll mx = 0;
    for (int bit = 0; bit < (1<<n); bit++) {
        string a="", b="";
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                a += N[i];
            }else {
                b += N[i];
            }
        }
        if(a.size() == 0 || b.size() == 0 || a[0] == '0' || b[0] == '0')
            continue;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        chmax(mx, (ll)stol(a) * (ll)stol(b));
    }
    cout << mx << endl;
}