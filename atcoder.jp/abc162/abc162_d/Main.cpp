#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  long count = 0;
  long long r=0, g=0, b=0;
  for(int i=0; i<N; i++){
    for(int j=i; j<N; j++){
      char a = S[i];
      char b = S[j];
      if(a != b){
        if(j+j-i < S.size() && j+j-i >= 0){
          char c = S[j+j-i];
          if(a != c && b != c){
            count++;
          }
        }
      }
    }
    if(S[i] == 'R') r++;
    if(S[i] == 'G') g++;
    if(S[i] == 'B') b++;
  }

  cout << r*g*b-count << endl;
}