#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int main() {
    string S; cin>>S;
    if(S.size() < 5){
        cout << "NO" << endl;
        return 0;
    }
    if(S[0] != 'A') S.insert(0, "A");
    if(S[4] != 'A') S.insert(4, "A");
    if(S[6] != 'A') S.insert(6, "A");
    if(S.back() != 'A') S += 'A';

    cout << (S == "AKIHABARA" ? "YES" : "NO") << endl;
}