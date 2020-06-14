#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
  rep(i, 5){
    int x;
    cin>>x;
    if(x == 0){
      cout << i+1 << endl;
      return 0;
    }
  }
}
