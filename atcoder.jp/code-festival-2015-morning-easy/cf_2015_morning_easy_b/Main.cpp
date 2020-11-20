#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S; cin>>S;
    ll count = 0;
    rep(i, N/2){
        if(S[i] != S[N/2+i]) count++;
    }
    cout << (N%2 == 0 ? count : -1) << endl;
}