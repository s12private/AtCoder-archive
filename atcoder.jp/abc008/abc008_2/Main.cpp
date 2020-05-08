#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

double dis(pair<long, long> a, pair<long, long> b){
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
  int n;
  cin >> n;
  map<string, int> map;
  for(int i=0; i<n; i++){
    string str;
    cin >> str;
    map[str]++;
  }

  int max = -1;
  string ans;
  for(auto pair : map){
    if(max < pair.second){
      max = pair.second;
      ans = pair.first;
    }
  }

  cout << ans << endl;
}

