#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, long long> map;
    for(int i=0; i<N; i++){
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        map[str]++;
    }

    long long ans = 0;
    for(auto pair : map){
        ans += (pair.second*(pair.second-1))/2;
    }

    cout << ans << endl;
}