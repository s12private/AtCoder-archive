#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int n[5];
    rep(i, 5) cin>>n[i];
    
    vector<int> sum;
    rep(i, 5){
        FOR(j, i+1, 5){
            FOR(k, j+1, 5){
                sum.push_back(n[i]+n[j]+n[k]);
            }
        }
    }

    sort(sum.begin(), sum.end());

    cout << sum[sum.size()-3] << endl;
}
