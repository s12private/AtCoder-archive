#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    //for(int i=0; i<100; i++){
        string s;
        cin>>s;
        //cout << s << ": ";

        if(s.size() == 2){
            int a = s[0] - '0';
            int b = s[1] - '0';
            if((a*10+b)%8 == 0 || (b*10+a)%8 == 0){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            return 0;
        }
        if(s.size() == 1){
            if((s[0]-'0')%8 == 0){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            return 0;
        }

        //cin >> s;
        map<ll, ll> a;
        for (char c : s) {
            int i = c - '0';
            if (a.count(i) == 0) {
                a[i] = 1;
            } else {
                a[i] += 1;
            }
        }

        vector<map<ll, ll>> b;
        for (ll i = 112; i < 1000; i += 8) {
            string str = to_string(i);
            if (str.find('0') == string::npos) {
                map<ll, ll> a;
                for (char c : str) {
                    int i = c - '0';
                    if (a.count(i) == 0) {
                        a[i] = 1;
                    } else {
                        a[i] += 1;
                    }
                }
                b.push_back(a);
            }
        }

        for (map<ll, ll> m : b) {
            bool flag = false;
            for (auto i : m) {
                if (!(a.count(i.first) && a[i.first] >= i.second)) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }

        cout << "No" << endl;
    //}
}