#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<long long> ans(s.size(), 0);

    int index = -1;
    for(int i=1; i<s.size(); i++){
        if(s[i-1] == 'R' && s[i] == 'L'){
            index = i;
        }
        
        if(index != -1 && s[i] == 'L'){
            if((i-index)%2 == 0){
                ans[index]++;
            }else{
                ans[index-1]++;
            }
        }
    }

    index = -1;
    for(int i=s.size()-2; i>=0; i--){
        if(s[i+1] == 'L' && s[i] == 'R'){
            index = i;
        }
        
        if(index != -1 && s[i] == 'R'){
            if((i-index)%2 == 0){
                ans[index]++;
            }else{
                ans[index+1]++;
            }
        }
    }

    string o = "";
    for(int i=0; i<s.size(); i++){
        o += to_string(ans[i]);
        if(i != s.size()-1){
            o += " ";
        }
    }
    cout << o << endl;
}