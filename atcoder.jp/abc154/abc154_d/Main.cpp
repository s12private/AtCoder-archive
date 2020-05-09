#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;
  long long p[N];
  for(long i=0; i<N; i++){
    cin >> p[i];
    p[i];
  }

  long long sum[N+1];
  sum[0] = 0;
  for(long long i=1; i<=N; i++){
    sum[i] = sum[i-1]+p[i-1];
  }

  long long ans = 0;
  for(long long i=K; i<=N; i++){
    ans = max(sum[i] - sum[i-K], ans);
  }

  cout << fixed << setprecision(10) << (ans+K)/2.0 << endl;
}
