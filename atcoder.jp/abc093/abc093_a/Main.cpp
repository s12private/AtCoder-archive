#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S; cin>>S;
    if(S.find("a") != string::npos && S.find("b") != string::npos && S.find("c") != string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}