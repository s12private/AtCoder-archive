#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int Q;
  cin >> S >> Q;

  deque<char> dq;
  for(int i=0; i<S.size(); i++){
    dq.push_back(S[i]);
  }

  bool flag = false;
  for(int i=0; i<Q; i++){
    int T;
    cin >> T;
    if(T == 1){
      flag = !flag;
    }else{
      int F;
      char C;
      cin >> F >> C;
      if(F==1){
        if(!flag){
          dq.push_front(C);
        }else{
          dq.push_back(C);
        }
      }else{
        if(!flag){
          dq.push_back(C);
        }else{
          dq.push_front(C);
        }
      }
    }
  }

  string ans = "";
  if(flag){
    for(int i=dq.size()-1; i>=0; i--){
      ans += dq[i];
    }
  }else{
    for(int i=0; i<dq.size(); i++){
      ans += dq[i];
    }
  }

  cout << ans << endl;
}
