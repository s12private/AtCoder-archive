#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   string S,T;
   cin>>S>>T;
   long count = 0;
   rep(i, S.size()){
       if(S[i] != T[i]) count++;
   }

   cout << count << endl;
}
