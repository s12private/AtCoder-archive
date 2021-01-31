#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S; cin>>S;

    ll left = 0, right = 0;
    rep(i, N){
        if(S[i] == '('){
            left++;
        }else{
            left = max(left-1, (ll)0);
        }

        if(S[N-i-1] == ')'){
            right++;
        }else{
            right = max(right-1, (ll)0);
        }
    }

    rep(i, right) cout << "(";
    cout << S;
    rep(i, left) cout << ")";
    cout << endl;
}