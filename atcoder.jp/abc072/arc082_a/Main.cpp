#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, long> map;

  for(int i=0; i<N; i++){
    int a;
    cin >> a;
    map[a]++;
    map[a+1]++;
    map[a-1]++;
  }

  long ans = 0;
  for(auto x : map){
    ans = max(x.second, ans);
  }

  cout << ans << endl;
}
