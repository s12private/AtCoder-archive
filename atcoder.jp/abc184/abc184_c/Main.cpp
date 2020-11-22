#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;

    if(r1==r2 && c1 == c2) {
        cout << 0 << endl;
    }else if(r1+c1 == r2+c2 || r1-c1 == r2-c2 || abs(r1-r2) + abs(c1-c2) <= 3){
        cout << 1 << endl;
    }else if(abs(r1+c1-(r2+c2)) <= 3 || abs(r1-c1-(r2-c2)) <=3){
        cout << 2 << endl;
    }else if((r1+c1)%2 == (r2+c2)%2){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
}