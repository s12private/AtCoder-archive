#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
bool isPrime(ll n){
    if(n < 2) return false;
    else{
        for(ll i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}
int main() {
    ll N; cin>>N;
    bool flag = isPrime(N);
    string s = to_string(N);
    if(N != 1 && N != 2 && (s.back()-'0')%2 != 0 && s.back() != '5'){
        ll sum = 0;
        for(char c : s) sum += c-'0';
        if(sum%3 != 0) flag = true;
    }

    cout << (flag ? "Prime" : "Not Prime") << endl;
}