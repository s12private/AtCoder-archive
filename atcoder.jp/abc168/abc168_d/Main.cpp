#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main(){
   ll N,M;
   cin>>N>>M;
   vector<vector<ll>> x(N);
   rep(i, M){
        ll A,B;
        cin>>A>>B;
        x[A-1].push_back(B-1);
        x[B-1].push_back(A-1);
   }

   queue<ll> q;
   q.push(0);
   vector<ll> dis(N, -1);
   dis[0] = 0;
   ll pre[N];
   while(!q.empty()){
       ll a = q.front();
       q.pop();
       for(ll next : x[a]){
           if(dis[next] == -1){
               q.push(next);
               dis[next] = dis[a]+1;
               pre[next] = a+1;
           }
       }
   }

    cout << "Yes" << endl;
   for(ll i=1; i<N; i++){
       cout << pre[i] << endl;
   }
}
