//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N, Q; cin>>N>>Q;
    vector<ll> A(N);
    rep(i, N) cin>>A[i];

    sort(A.begin(), A.end());
    vector<ll> B, C;
    A.push_back(1e19);
    ll sum = 1;
    if(A[0] != 1){
        B.push_back(1);
        C.push_back(1);
        //cout << B.back() << endl;
        sum = A[0];
    }
    rep(i, A.size()-1){
        if(A[i+1]-A[i] == 1){
            continue;
        }
        B.push_back(sum);
        C.push_back(A[i]+1);
        //cout << B.back() << "," << C.back()<< endl;
        sum += A[i+1]-A[i]-1;
    }

    //cout << "-" << endl;
    rep(i, Q){
        ll K; cin>>K;
        auto it = lower_bound(B.begin(), B.end(), K);
        ll index = it - B.begin();
        if(index >= B.size() || B[index] > K) index--;
        //cout << index << endl;
        cout << C[index] + (K-B[index]) << endl;
    }
}