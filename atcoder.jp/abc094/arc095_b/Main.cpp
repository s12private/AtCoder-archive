#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i, n) cin>>a[i];

    sort(a.begin(), a.end());

    double middle = a.back()/2.0;
    auto itr = lower_bound(a.begin(), a.end(), middle);

    ll index = distance(a.begin(), itr);

    if(abs(a[max((ll)0, index-1)] - middle) <= abs(a[index] - middle)){
        cout << a.back() << " " << a[max((ll)0, index-1)] << endl;
    }else{
        cout << a.back() << " " << a[index] << endl;
    }
}