#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S; cin>>S;
    ll K; cin>>K;

    bool isSame = true;
    char c = S[0];
    rep(i, S.size()){
        if(c != S[i]) isSame = false;
    }
    if(isSame){
        cout << S.size()*K/2 << endl;
        return 0;
    }

    char last = '-';
    ll count = 0;
    ll sum = 0;
    rep(i, S.size()){
        if(last == S[i]){
            count++;
        }else{
            sum += count/2;
            count = 1;
        }
        last = S[i];
    }
    sum += count/2;

    if(S[0] != S.back()){
        cout << sum*K << endl;
        return 0;
    }

    ll sumL = 0, sumR = 0;
    ll left, right;
    for(left=0; S[left] == S[0]; left++){
        sumL++;
    }
    for(right=S.size()-1; S[right] == S[0]; right--){
        sumR++;
    }
    count = 0;
    last = '-';
    sum = 0;
    for(ll i=left; i<=right; i++){
        if(last == S[i]){
            count++;
        }else{
            sum += count/2;
            count = 1;
        }
        last = S[i];
    }
    sum += count/2;

    ll ans = sumL/2 + sum*K + (sumL+sumR)/2*(K-1) + sumR/2;

    cout << ans << endl;
}