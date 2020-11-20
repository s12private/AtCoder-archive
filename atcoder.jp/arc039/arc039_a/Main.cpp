#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string A, B; cin>>A>>B;

    ll mx = stoll(A)-stoll(B);
    rep(i, 3){
        string a = A;
        for(char c= i==0 ? '1' : '0'; c<='9'; c++){
            a[i] = c;
            mx = max(stoll(a)-stoll(B), mx);
        }
    }
    rep(i, 3){
        string b = B;
        for(char c= i==0 ? '1' : '0'; c<='9'; c++){
            b[i] = c;
            mx = max(stoll(A)-stoll(b), mx);
        }
    }
    cout << mx << endl;
}