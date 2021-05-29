//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    ll N; cin>>N;
    vector<vector<ll>> graph(N);
    rep(i, N-1){
        ll A,B; cin>>A>>B; A--, B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    stack<ll> st;
    st.push(0);
    vector<bool> reached(N);
    reached[0] = true;
    ll mx = 0, index = 0;
    vector<ll> dist(N);
    while(!st.empty()){
        ll top = st.top();
        st.pop();
        ll count = 0;
        for(ll v : graph[top]){
            if(reached[v]) continue;
            dist[v] += dist[top]+1;
            st.push(v);
            reached[v] = true;
            count++;
        }
        if(count == 0){
            if(mx < dist[top]){
                mx = dist[top];
                index = top;
            }
        }
    }


    stack<ll> st2;
    st2.push(index);
    vector<bool> reached2(N);
    reached[index] = true;
    mx = 0;
    vector<ll> dist2(N);
    while(!st2.empty()){
        ll top = st2.top();
        st2.pop();
        ll count = 0;
        for(ll v : graph[top]){
            if(reached2[v]) continue;
            dist2[v] += dist2[top]+1;
            st2.push(v);
            reached2[v] = true;
            count++;
        }
        if(count == 0){
            chmax(mx, dist2[top]);
        }
    }

    cout << mx+1 << endl;
}