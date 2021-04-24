//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<char> s;
    string S; cin>>S;
    for(char c : S) s.push_back(c);
    ll Q; cin>>Q;
    ll flip = 0;
    rep(i, Q){
        ll T,A,B; cin>>T>>A>>B;
        A--, B--;
        if(T == 1){
            if(flip%2 == 0){

            }else{
                A = A<N ? A+N : A-N;
                B = B<N ? B+N : B-N;
            }

            char a = s[A];
            s[A] = s[B];
            s[B] = a;
        }else{
            flip++;
        }
    }
    if(flip%2==0){
        rep(i, 2*N){
            cout << s[i];
        }
        cout << endl;
    }else{
        rep(i, N){
            cout << s[N+i];
        }
        rep(i, N){
            cout << s[i];
        }
        cout << endl;
    }
}