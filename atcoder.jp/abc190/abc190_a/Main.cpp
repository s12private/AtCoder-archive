#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll A,B,C;cin>>A>>B>>C;
    while (true) {
        if(C == 0) {
            A--;
            if(A <= 0){
                cout << "Aoki" << endl;
                return 0;
            }
            B--;
            if(B <= 0){
                cout << "Takahashi" << endl;
                return 0;
            }
        }else{
            B--;
            if(B <= 0){
                cout << "Takahashi" << endl;
                return 0;
            }
            A--;
            if(A <= 0){
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
}


