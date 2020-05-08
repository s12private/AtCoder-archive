#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

double dis(pair<long, long> a, pair<long, long> b){
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
  string S;
  cin >> S;

  string t = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
  string ans[S.size()] = {"Do", "", "Re", "", "Mi", "Fa", "", "So", "", "La", "", "Si"};
  
  cout << ans[t.find(S)] << endl;
}

