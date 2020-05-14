#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < n; i++)

typedef long long ll;

int main() {
    ll N,K;
    cin>>N>>K;
    ll A[N];
    rep(i, N) cin>>A[i];

    vector<int> s;
    vector<int> ord(N+1, -1);
    int c = 1;
    int v=1;
    int l = 0;
    while(ord[v] == -1){
        ord[v] = s.size();
        s.push_back(v);
        v = A[v-1];
    }
    c = s.size()-ord[v];
    l = ord[v];

    if(K < l) cout << s[K] << endl;
    else{
        K -= l;
        K %= c;
        cout<< s[l+K] << endl;
    }
}