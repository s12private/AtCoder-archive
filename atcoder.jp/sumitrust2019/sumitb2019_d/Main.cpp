#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S; cin>>S;

    ll ans = 0;
    for(char i='0'; i<='9'; i++){
        for(char j='0'; j<='9'; j++){
            for(char k='0'; k<='9'; k++){
                bool a=false,b=false,c=false;
                rep(l, S.size()){
                    if(!a && !b && !c && S[l] == i) a = true;
                    else if(a && !b && !c && S[l] == j) b = true;
                    else if(a && b && !c && S[l] == k) c = true;
                }
                if(a && b && c){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}