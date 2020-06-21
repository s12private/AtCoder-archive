#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   ll N; cin>>N;

   char s[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    string ans = "";
    bool flag = false;
   while(N > 0){
       int z = N%26;
       if(z == 0) z = 26;
       ans += {s[z-1]};
       N = (N-1)/26;
       //cout << z-1 << endl;
   }

    reverse(ans.begin(), ans.end());
   cout << ans << endl;
}
