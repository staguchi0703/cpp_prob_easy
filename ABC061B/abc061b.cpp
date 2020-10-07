#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> edges(N, vector<int>(1, 0));

    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edges[a].push_back(b);
        edges[b].push_back(a); 
    } 

    rep(i, N){
        int ans = 0;
        ans = edges[i].size();
        cout << ans-1 << endl;
    }
}