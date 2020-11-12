#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin>>n;
    while(n--) {
        string T;
        cin >> T;
        bool flag = false;
        rep(i, T.size()) {
            if (T[i] != 'a') flag = true;
        }
        if (!flag) {
            cout << -1 << endl;
            continue;
        }

        if (T > "atcoder") {
            cout << 0 << endl;
            continue;
        }

        rep(i, T.size()) {
            if (T[i] != 'a'){
                string t = T;
                t.erase(i, 1);
                string a = {T[i]};
                t.insert(1, a);
                if(t > "atcoder"){
                    cout << i-1 << endl;
                }else{
                    cout << i << endl;
                }
                break;
            }
        }
        continue;
    }
}