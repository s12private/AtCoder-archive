//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, H; cin>>N>>H;
    vector<ll> a(N), b(N);
    rep(i, N) cin>>a[i]>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    stack<ll> c,d;
    rep(i, N){
        c.push(a[i]);
        d.push(b[i]);
    }

    ll res = 0;
    while(!d.empty()){
        if(H <= 0) break;
        if(c.top() > d.top()) break;
        H -= d.top();
        d.pop();
        res++;
    }

    if(H > 0) res += ceil((double)H/c.top());
    cout << res << endl;
}