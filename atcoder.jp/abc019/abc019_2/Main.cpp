#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

double dis(pair<long, long> a, pair<long, long> b){
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
  string s;
  cin >> s;

  int a = 1;
  string ans = "";
  for(int i=1; i<s.size(); i++){
    if(s[i-1] == s[i]){
      a++;
      if(i == s.size()-1){
        ans += s[i] + to_string(a);
      }
    }else{
      ans += s[i-1]+to_string(a);
      a = 1;
    }
    if(i == s.size()-1 && a == 1){
      ans += s[i] + to_string(1);
    }
  }

  if(s.size() == 1){
    ans = s + to_string(1);
  }

  cout << ans << endl;
}

