#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    string S,T; cin>>S>>T;

    char list[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

    rep(i, S.size()){
        if(S[i] != T[i]){
            if(S[i] == '@' && T[i] != '@'){
                bool flag = false;
                for(char c : list){
                    if(T[i] == c){
                        flag = true;
                    }
                }
                if(!flag){
                    cout << "You will lose" << endl;
                    return 0;
                }
            }
            if(T[i] == '@' && S[i] != '@'){
                bool flag = false;
                for(char c : list){
                    if(S[i] == c){
                        flag = true;
                    }
                }
                if(!flag){
                    cout << "You will lose" << endl;
                    return 0;
                }
            }

            if(T[i] != '@' && S[i] != '@'){
                cout << "You will lose" << endl;
                return 0;
            }
        }
    }

    cout << "You can win" << endl;
}
