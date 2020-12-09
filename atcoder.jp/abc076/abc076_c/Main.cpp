#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S, T; cin>>S>>T;

    for(ll i=S.size()-1; i>=0; i--){
        bool flag = false;
        for(ll j=0; j<T.size(); j++){
            if(i-j < 0 || S[i-j] != T[T.size()-j-1] && S[i-j] != '?'){
                flag = true;
                break;
            }
        }
        if(!flag){
            for(ll j=0; j<S.size(); j++){
                if(j > i-(ll)T.size() && j <= i){
                    cout << T[j-i+T.size()-1];
                }else{
                    if(S[j] == '?') cout << "a";
                    else cout << S[j];
                }
            }
            cout << endl;
            return 0;
        }
    }

    cout << "UNRESTORABLE" << endl;
}