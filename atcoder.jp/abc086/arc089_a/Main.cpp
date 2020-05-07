#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ts[N+1];
  pair<int, int> p[N+1];
  ts[0] = 0;
  p[0].first = 0;
  p[0].second = 0;
  for(int i=1; i<N+1; i++){
    cin >> ts[i] >> p[i].first >> p[i].second;
  }

  for(int i=1; i<N+1; i++){
    int t = ts[i];
    int x = p[i].first;
    int y = p[i].second;

    int dis = abs(p[i-1].first - x) + abs(p[i-1].second - y);
    if(t - ts[i-1] < dis || (t - ts[i-1] - dis)%2 != 0){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
