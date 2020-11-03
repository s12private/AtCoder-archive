#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int c; cin>>c;
    vector<int> N(c), M(c), L(c);
    rep(i, c) {
        vector<int> a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(), a.end());
        N[i] = a[0];
        M[i] = a[1];
        L[i] = a[2];
    }

    sort(N.begin(), N.end());
    sort(M.begin(), M.end());
    sort(L.begin(), L.end());

    cout << N.back()*M.back()*L.back() << endl;
}