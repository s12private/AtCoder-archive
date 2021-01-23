#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S; cin>>S;
    if(S[0] == S[1] && S[1] == S[2]){
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }
}