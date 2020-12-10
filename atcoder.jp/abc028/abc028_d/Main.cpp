#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,K; cin>>N>>K;

    ll sum = (N-K)*(K-1)*6 + (N-1)*3 + 1;
    cout << fixed << setprecision(10) << sum/pow(N, 3) << endl;
}