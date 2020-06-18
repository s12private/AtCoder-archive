#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

void f(int N, string s){
    if(N == 0) cout << s << endl;
    else {
        for(char c='a'; c<='c'; c++){
            f(N-1, s+c);
        }
    }
}

int main(){
    int N;
    cin>>N;
    f(N, "");
}
