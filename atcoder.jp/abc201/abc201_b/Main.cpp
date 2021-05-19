#define _GLIBCXX_DEBUG      //配列外参照の検出
#include <bits/stdc++.h>    //標準ライブラリをインクルード
using namespace std;        //std::の省略
typedef long long ll;       //long longをllに省略

bool compare_second(pair<string, ll> a, pair<string, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll N; cin>>N;
    vector<pair<string, ll>> S(N);
    for(int i=0; i<N; i++){
        cin>>S[i].first>>S[i].second;
    }

    sort(S.rbegin(), S.rend(), compare_second);
    cout << S[1].first << endl;
}