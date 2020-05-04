#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  pair<pair<string,int>, int> pair[N];

  for(int i=0; i<N; i++){
    string name;
    int point;
    cin >> name >> point;
    pair[i] = make_pair(make_pair(name, -point), i);
  }

  sort(pair, pair+N);

  for(int i=0; i<N; i++){
    cout << pair[i].second+1 << endl;
  }
}