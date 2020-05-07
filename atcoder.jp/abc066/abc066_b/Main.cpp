#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for(int i=0; i<S.size(); i++){
    S.erase(S.size()-1);
    if(S.size()%2 != 0) continue;
    if(S.substr(0, S.size()/2) == S.substr(S.size()/2, S.size())){
      cout << S.size() << endl;
      return 0;
    }
  }

  cout << "2" << endl;
}
