#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    ll N; cin>>N;
    string S; cin>>S;
    double gpa = 0;
    rep(i, N){
        if(S[i] == 'A') gpa += 4;
        if(S[i] == 'B') gpa += 3;
        if(S[i] == 'C') gpa += 2;
        if(S[i] == 'D') gpa += 1;
        if(S[i] == 'F') gpa += 0;
    }

    cout << fixed << setprecision(15) << gpa/N << endl;
}