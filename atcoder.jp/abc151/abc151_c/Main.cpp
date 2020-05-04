#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N, M;
  cin >> N >> M;
  vector<long> p(M);
  vector<string> S(M);

  for(int i=0; i<M; i++){
    cin >> p.at(i) >> S.at(i);
  }

  vector<bool> result(N, false);
  long ac = 0;
  long wa = 0;
  for(int i=0; i<M; i++){
    long num = p[i]-1;
    if(S[i] == "AC"){
      if(!result[num]){
        ac++;
        result[num] = true;
      }
    }
  }

  vector<bool> result2(N, false);
  for(int i=0; i<M; i++){
    long num = p[i]-1;
    if(S[i] == "WA"){
      if(result[num]){
        if(!result2[num]){
          wa++;
        }
      }
    }else{
      if(!result2[num]){
          result2[num] = true;
        }
    }
  }

  cout << ac << " " << wa << endl;
}