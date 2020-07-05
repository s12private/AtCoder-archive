#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
   int N; cin>>N;
   vector<int> count(4, 0);

   rep(i, N){
       string s; cin>>s;
       if(s == "AC") count[0]++;
       if(s == "WA") count[1]++;
       if(s == "TLE") count[2]++;
       if(s == "RE") count[3]++;
   }

   rep(i, 4){
       if(i == 0) cout << "AC x " << count[0] << endl;
       if(i == 1) cout << "WA x " << count[1] << endl;
       if(i == 2) cout << "TLE x " << count[2] << endl;
       if(i == 3) cout << "RE x " << count[3] << endl;
   }
}
