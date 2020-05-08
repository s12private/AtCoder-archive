#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int b[N];
  vector<long long> A(N, 0);
  for(int i=0; i<N; i++){
    int num;
    cin >> num;
    A[num-1]++;
    b[i] = num-1;
  }

  vector<long long> c(N, 0);
  long long sum = 0;
  for(int i=0; i<N; i++){
    c[i] = (A[i]*(A[i]-1))/2;
    sum += c[i];
  }

  for(int i=0; i<N; i++){
    int index = b[i];
    long long ans = sum - c[index] + ((A[index]-1)*(A[index]-2))/2;
    cout << ans << endl;
  }
}