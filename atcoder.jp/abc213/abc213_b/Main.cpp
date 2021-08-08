//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<pair<ll, ll>> A(N);
    rep(i, N) {
        A[i].second = i+1;
        cin>>A[i].first;
    }
    sort(A.rbegin(), A.rend());

    cout << A[1].second << endl;
}