#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S[N];
    rep(i, N) cin>>S[i];

    unordered_map<string, int> se;
    for(string s : S){
        string str = s;
        se[str]++;
        if(str[0] == '!'){
            str = str.substr(1);
        }else{
            str = "!" + str;
        }
        if(se[str] != 0){
            if(str[0] == '!') cout << str.substr(1) << endl;
            else cout << str << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}