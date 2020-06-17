#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string S;
    int N;
    cin>>S>>N;
    rep(i, N){
        int l,r;
        cin>>l>>r;
        string str = S.substr(l-1, r-l+1);
        reverse(str.begin(), str.end());
        S = S.substr(0, l-1) + str + S.substr(r, S.size()-r);
    }

    cout << S << endl;
}
