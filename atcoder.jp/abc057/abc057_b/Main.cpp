#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

double dis(pair<long, long> a, pair<long, long> b){
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
  int N, M;
  cin >> N >> M;
  pair<long, long> g[N], c[M];
  for(int i=0; i<N; i++){
    cin >> g[i].first >> g[i].second;
  }
  for(int i=0; i<M; i++){
    cin >> c[i].first >> c[i].second;
  }

  int ans[N];
  for(int i=0; i<N; i++){
    double min = 1e9;
    for(int j=M-1; j>=0; j--){
      if(min >= dis(g[i], c[j])){
        min = dis(g[i], c[j]);
        ans[i] = j+1;
      }
    }
  }

  for(int i=0; i<N; i++){
    cout << ans[i] << endl;
  }
}

