#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    string A, B;
    string ans;
    cin >> A >> B;


    if (A == B)
        ans = "EQUAL";
    else{ 
        if(A.size() == B.size()) {
            rep(i, A.size()){
                if(A[i] > B[i]){
                    ans = "GREATER";
                    break;
                }else if (A[i] < B[i]){
                    ans = "LESS";
                    break;
                }
            }

        }else if (A.size() > B.size()){
            ans = "GREATER";
        }else{
            ans = "LESS";
        }
    }
    cout << ans << endl;
}
