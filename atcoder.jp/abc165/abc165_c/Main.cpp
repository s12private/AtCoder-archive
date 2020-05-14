#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, a, n) for(int i = a; i < n; i++)

typedef long long ll;
 
int N, M, Q;
vector<int> a,b,c,d;

long dfs(vector<int> A, int index, int num){
    if(N == index){
        long score = 0;
        for(int i=0; i<Q; i++){
            if(A[b[i]-1] - A[a[i]-1] == c[i]){
                score += d[i];
                //cout << d[i] << endl;
            }
        }
        return score;
    }

    long score = 0;
    for(int i=num; i<=M; i++){
        A[index] = i;
        score = max(dfs(A, index+1, i), score);
    }
    return score;
}

int main() {
    cin>>N>>M>>Q;
    rep(i, Q){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        a.push_back(w);
        b.push_back(x);
        c.push_back(y);
        d.push_back(z);
    }

    vector<int> A(N, 1);
    long ans = dfs(A, 0, 1);
    cout << ans << endl;
}
