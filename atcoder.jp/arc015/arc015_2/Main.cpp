#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    ll a=0,b=0,c=0,d=0,e=0,f=0;
    rep(i, N){
        double t1, t2; cin>>t1>>t2;
        if(t1>=35){
            a++;
        }
        if(t1>=30 && t1<35){
            b++;
        }
        if(t1>=25 && t1<30){
            c++;
        }
        if(t2>=25){
            d++;
        }
        if(t2<0 && t1>=0){
            e++;
        }
        if(t1<0){
            f++;
        }
    }

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
}