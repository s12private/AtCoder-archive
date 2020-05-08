#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long K;
  cin >> N >> K;
  map<int, long long> map;
  for(int i=0; i<N; i++){
    int a, b;
    cin >> a >> b;
    map[a] += b;
  }

  long long count = 0;
  for(auto pair : map){
    count += pair.second;
    if(K <= count){
      cout << pair.first << endl;
      return 0;
    }
  }
}