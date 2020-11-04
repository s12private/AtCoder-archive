#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main() {
    ll x, y; cin>>x>>y;
    if(x >= 0){
        if(y > 0){
            if(x <= y){
                cout << y-x << endl;
            }else{
                cout << x-y+2 << endl;
            }
        }else if(y < 0){
            if(abs(y) <= x){
                cout << x-abs(y)+1 << endl;
            }else{
                cout << abs(y)-x+1 << endl;
            }
        }else{
            cout << x+1 << endl;
        }
    }else{
        if(y > 0){
            if(abs(x) <= y){
                cout << y-abs(x)+1 << endl;
            }else{
                cout << abs(x)-y+1 << endl;
            }
        }else if(y < 0){
            if(x <= y){
                cout << abs(x)-abs(y) << endl;
            }else{
               cout << abs(y)-abs(x)+2 << endl;
            }
        }else{
            cout << abs(x) << endl;
        }
    }
}