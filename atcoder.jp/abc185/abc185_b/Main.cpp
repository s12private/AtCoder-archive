#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M,T; cin>>N>>M>>T;
    ll n = N, l=0;
    rep(i, M){
        ll A,B; cin>>A>>B;
        n = max(n-(A - l), (ll)0);
        if(n <= 0){
            cout << "No" << endl;
            return 0;
        }
        n = min(n+(B-A), N);
        l = B;
    }

    cout << (n-(T-l) <= 0 ? "No" : "Yes") << endl;
}