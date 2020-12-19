#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    ll res = 0;
    for(ll i=1; i<=N; i++){
        string s = to_string(i);
        if(s.find('7') == string::npos){
            stringstream ss;
            ss << oct << i;
            string a = ss.str();
            if(a.find('7') == string::npos){
                res++;
            }
        }
    }
    cout << res << endl;
}