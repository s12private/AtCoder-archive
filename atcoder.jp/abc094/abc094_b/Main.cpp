#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N,M,X; cin>>N>>M>>X;
    ll left = 0, right = 0;
    rep(i, M){
        ll A; cin>>A;
        if(A < X){
            left++;
        }else{
            right++;
        }
    }

    cout << min(left, right) << endl;
}