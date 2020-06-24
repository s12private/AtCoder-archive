#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int N,a,b,c; cin>>N>>a>>b>>c;
    
    int count = 0;

    if(N == a || N == b || N == c){
        cout << "NO" << endl;
        return 0;
    }
    while(N > 0){
        if(N-3 != a && N-3 != b && N-3 != c){
            count++;
            N -= 3;
        }else if(N-2 != a && N-2 != b && N-2 != c){
            count++;
            N -= 2;
        }else if(N-1 != a && N-1 != b && N-1 != c){
            count++;
            N -= 1;
        }else{
            break;
        }
    }

    if(count > 100 || N > 0){
        cout << "NO" << endl; 
    }else{
        cout << "YES" << endl; 
    }
}
