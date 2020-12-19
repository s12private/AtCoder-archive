//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N, M; cin>>N>>M;
    vector<ll> A(M+1);
    A[0] = 0;
    rep(i, M)cin>>A[i];
    A.push_back(N+1);
    sort(A.begin(), A.end());

    ll mn = N;
    rep(i, A.size()-1){
        ll dis = A[i+1] - A[i] - 1;
        if(dis <= 0) continue;
        mn = min(dis, mn);
    }

    ll count = 0;
    rep(i, A.size()-1){
        count += ceil((A[i+1]-A[i]-1)/double(mn));
    }
    cout << count << endl;
}