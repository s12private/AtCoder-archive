#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < n; i++)

typedef long long ll;

int main() {
    string s,t;
    cin>>s>>t;

    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());

    if(s < t){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}