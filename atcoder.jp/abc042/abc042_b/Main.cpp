#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, L; cin>>N>>L;
    vector<string> S(N);
    rep(i, N) cin>>S[i];
    sort(S.begin(), S.end());
    rep(i, N) cout << S[i];
    cout << endl;
}