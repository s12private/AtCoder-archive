#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, M;
  cin >> N >> M;
  pair<long, long> pair[N];
  for(long i=0; i<N; i++){
    cin >> pair[i].first >> pair[i].second;
  }

  long money = 0;
  sort(pair, pair+N);

  for(long i=0; i<N; i++){
    long count = min(M, pair[i].second);
    money += pair[i].first*count;
    M -= count;
    if(M == 0) break;
  }

  cout << money << endl;
}