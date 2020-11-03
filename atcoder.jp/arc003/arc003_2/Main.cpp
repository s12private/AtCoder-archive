#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   int N; cin>>N;
   vector<string> s(N);
   rep(i, N){
       cin>>s[i];
       reverse(s[i].begin(), s[i].end());
   }

   sort(s.begin(), s.end());
   rep(i, N){
       reverse(s[i].begin(), s[i].end());
       cout << s[i] << endl;
   }
}