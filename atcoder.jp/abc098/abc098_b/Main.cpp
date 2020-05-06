#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  for(int i=0; i<N; i++){
    set<char> set1, set2;
    int count = 0;
    for(int j=0; j<N; j++){
      if(j < i){
        set1.insert(S[j]);
      }else{
        set2.insert(S[j]);
      }
    }
    for(char val : set2){
      if(set1.find(val) != set1.end()){
        count++;
      }
    }
    ans = max(count, ans);
  }

  cout << ans << endl;
}
