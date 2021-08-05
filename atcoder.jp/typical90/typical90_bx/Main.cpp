//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<ll> A(N*2);
    ll sum = 0;
    rep(i, N){
        cin>>A[i];
        sum += A[i];
    }
    rep(i, N){
        A[i+N] = A[i];
    }

    if(sum%10 != 0){
        cout << "No" << endl;
        return 0;
    }

    sum /= 10;
    ll r = 0;
    ll s = 0;
    rep(l, N){
        while(r < A.size() && s+A[r] <= sum){
            s += A[r];
            r++;
        }
        if(s == sum){
            cout << "Yes" << endl;
            return 0;
        }
        if(l == r) r++;
        else s -= A[l];
    }
    cout << "No" << endl;
}