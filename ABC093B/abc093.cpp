#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    set<int> s;

    rep(i,K){
        if(A+i <= B)
            s.insert(A+i);
        if(B-i >= A)
            s.insert(B-i);
    }

    for(auto x : s){
        cout << x << endl;
    }

}