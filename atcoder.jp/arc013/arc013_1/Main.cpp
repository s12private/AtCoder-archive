#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N[3]; cin>>N[0]>>N[1]>>N[2];
    ll P[3]; cin>>P[0]>>P[1]>>P[2];
    ll mx = 0;
    rep(i, 3){
        rep(j, 3){
            if(j==i) continue;
            rep(k, 3){
                if(k==j || k==i) continue;
                mx = max(mx, (N[0]/P[i])*(N[1]/P[j])*(N[2]/P[k]));
            }
        }
    }
    cout << mx << endl;
}