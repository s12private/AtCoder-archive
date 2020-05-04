//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;
  vector<long> P(N);
  for(int i=0; i<N; i++){
    cin >> P.at(i);
  }

  long min = P.at(0);
  long ans = 1;
  for(int i=1; i<N; i++){
    if(min >= P.at(i)){
      ans++;
    }
    min = std::min(min, P.at(i));
  }

  cout << ans << endl;
}