#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N;
  string s[N];
  for(int i=0; i<N; i++){
    cin >> s[i];
  }
  cin >> M;
  string t[M];
  for(int i=0; i<M; i++){
    cin >> t[i];
  }

  map<string, int> map;
  for(int i=0; i<N; i++){
    if(map.count(s[i]) == 0){
      map[s[i]] = 1;
    }else{
      map[s[i]]++;
    }
  }
  for(int i=0; i<M; i++){
    if(map.count(t[i]) == 0){
      map[t[i]] = -1;
    }else{
      map[t[i]]--;
    }
  }

  int ans = 0;
  for(auto pair : map){
    ans = max(pair.second, ans);
  }

  cout << ans << endl;
}
