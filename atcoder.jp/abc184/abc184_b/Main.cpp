#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, X; cin>>N>>X;
    string S; cin>>S;
    for(char c : S){
        if(c == 'o'){
            X++;
        }else{
            X = max((ll)0, X-1);
        }
    }

    cout << X << endl;
}