#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, K;
  cin >> N >> K;
  long h[N];
  for(long i=0; i<N; i++) cin >> h[i];

  sort(h, h+N);

  long ans = 0;
  for(long i=K-1; i<N; i++){
    long min = h[i-K+1];
    long max = h[i];
    if(i == K-1) ans = max-min;
    ans = std::min(max-min, ans);
  }

  cout << ans << endl;
}