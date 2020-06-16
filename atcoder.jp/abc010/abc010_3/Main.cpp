#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int tx[2], ty[2], T,V,n;
    cin>>tx[0]>>ty[0]>>tx[1]>>ty[1]>>T>>V>>n;
    int x[n], y[n];
    rep(i, n){
        int x,y;
        cin>>x>>y;
        if(sqrt(pow(tx[1]-x, 2)+pow(ty[1]-y, 2)) + sqrt(pow(tx[0]-x, 2)+pow(ty[0]-y, 2)) <= T*V){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
