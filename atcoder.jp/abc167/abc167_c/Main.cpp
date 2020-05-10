#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    long X;
    cin>>N>>M>>X;
    long C[N];
    long A[N][M];
    for(int i=0; i<N; i++){
        cin>>C[i];
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }

    vector<long long> z(M, 0);
    for(int i=0; i<N; i++){
        for(int j=0;j<M;j++){
            z[j] += A[i][j];
        }
    }
    
    int n = N;
    long ans = -1;
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<long> skills(M, 0);
        long money = 0;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                for(int j=0; j<M; j++){
                    skills[j] += A[i][j];
                }
                money += C[i];
            }
        }
        bool ok = true;
        for(int i=0; i<M; i++){
            if(skills[i] < X){
                ok = false;
                break;
            }
        }
        if(ok){
            if(ans == -1) ans = money;
            else ans = min(money, ans);
        }
    }

    cout << ans << endl;
}