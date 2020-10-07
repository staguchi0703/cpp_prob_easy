#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int N;
    cin >> N;

    vector<string> words(N);
    set<string> sets;
    rep(i, N){
        cin >> words[i];
        sets.insert(words[i]);
    }

    string ans = "Yes"; 
    if(sets.size() != words.size())
        ans = "No";
    else{
        char next_starter = '0';
        rep(i, N){
            char s = words[i][0];
            char l = words[i][words[i].size()-1];

            if (i != 0){
                if(s != next_starter){
                    ans = "No";
                }
            }
            next_starter = l;
        }
    }
    cout << ans << endl;
}