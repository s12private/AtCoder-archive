#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, b) for(int i = a; i < n; i++)

typedef long long ll;

int main() {
    string s; cin>>s;

    string ans = "";
    for(char a : s){
        if(a == 'B'){
            if(ans.size() > 0){
                ans.erase(ans.size()-1, 1);
            }
        }else{
            ans += a;
        }
    } 
    cout << ans << endl;
}