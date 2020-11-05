#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll N,A,B,C,D; cin>>N>>A>>B>>C>>D;
    string S; cin>>S;
    bool flag = false;
    for(ll i=A+1; i<C; i++){
        if(S[i-1] == '#' &&  S[i] == '#') flag = true;
    }
    for(ll i=B+1; i<D; i++){
        if(S[i-1] == '#' && S[i] == '#') flag = true;
    }

    if(C > D){
        bool f = false;
        for(ll i=B; i<=D; i++){
            if(S[i-2] == S[i-1] && S[i-1] == S[i] && S[i] == '.'){
                f = true;
            }
        }
        if(!f) flag = true;
    }

    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
}