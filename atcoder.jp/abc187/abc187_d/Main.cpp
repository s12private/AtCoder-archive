//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

vector<ll> A, B;
bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return A[a.first] < A[b.first];
    }
}
int main() {
    ll N; cin>>N;
    vector<pair<ll, ll>> p;
    ll sum = 0;
    rep(i, N){
        ll a, b;
        cin>>a>>b;
        A.push_back(a);
        B.push_back(b);
        p.push_back(make_pair(i, 2*A[i]+B[i]));
        sum += A[i];
    }
    sort(p.rbegin(), p.rend(), compare_by_b);

    ll res = 0;
    ll sumR = 0;
    rep(i, N){
        sumR += A[p[i].first] + B[p[i].first];
        sum -= A[p[i].first];
        res++;
        if(sumR > sum) break;
    }
    cout << res << endl;
}