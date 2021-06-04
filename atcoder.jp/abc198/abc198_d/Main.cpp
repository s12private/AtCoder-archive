//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    string S1,S2,S3; cin>>S1>>S2>>S3;

    set<char> s;
    ll sum = 0;
    rep(i, S1.size()) s.insert(S1[i]);
    rep(i, S2.size()) s.insert(S2[i]);
    rep(i, S3.size()) s.insert(S3[i]);

    if(s.size() > 10){
        cout << "UNSOLVABLE"<< endl;
        return 0;
    }

    vector<int> a = {0,1,2,3,4,5,6,7,8,9};
    unordered_map<char, ll> m;
    reverse(S1.begin(), S1.end());
    reverse(S2.begin(), S2.end());
    reverse(S3.begin(), S3.end());
    ll ii = 0;
    for(char c : s) m[c] = ii, ii++;
    do{
        if(a[m[S1[S1.size()-1]]] == 0 || a[m[S2[S2.size()-1]]] == 0 || a[m[S3[S3.size()-1]]] == 0) continue;

        ll b=0,c=0,d=0;
        ll p = 1;
        rep(i, S1.size()){
            b += a[m[S1[i]]]*p;
            p *= 10;
        }
        p = 1;
        rep(i, S2.size()){
            c += a[m[S2[i]]]*p;
            p *= 10;
        }
        p = 1;
        rep(i, S3.size()){
            d += a[m[S3[i]]]*p;
            p *= 10;
        }

        if(b+c == d){
            cout << b << endl << c << endl << d << endl;
            return 0;
        }

    }while(next_permutation(a.begin(), a.end()));

    cout << "UNSOLVABLE"<< endl;
}