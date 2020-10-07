#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int> > vec(N, vector<int>(D));

    rep(i, N) rep(j, D){
            cin >> vec[i][j];
    }

    int int_list[500];
    rep(i, 500){
        int_list[i] = pow(i, 2);
    }

    int cnt = 0;

    rep(i, N) {
        rep(j, i){
            int length2 = 0;
            rep(k, D){
                int delta = (vec[i][k] - vec[j][k]);
                length2 += delta * delta;
            }
            rep(l, 500){
                if (length2 == int_list[l]){
                    cnt++;
                    break;
                }
            }

        }   
    }
    cout << cnt << endl;
}