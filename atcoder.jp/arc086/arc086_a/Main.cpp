//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

bool pairCompare(const pair<int, int>& a, const pair<int, int>& b){
  return a.second < b.second;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n, 0);
  for(int i=0; i<n; i++){
    int num;
    cin >> num;
    a[num-1]++;
  }

  sort(a.begin(), a.end());

  int ans = 0;
  int count = 0;
  for(int i=n-1; i>=0; i--){
    if(a[i] == 0) break;
    count++;
    if(count > k){
      ans += a[i];
    }
  }

  cout << ans << endl;
}

