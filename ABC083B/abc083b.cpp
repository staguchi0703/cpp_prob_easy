#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    
    for (int i =1; i <= N; i++){
        string item = to_string(i);
        int temp_ans = 0, temp_num = i;

        rep(j, 5){
            temp_ans += temp_num % 10;
            temp_num /= 10;
        }

        if (A <= temp_ans and B >= temp_ans)
            ans += i;
    }
    cout << ans << endl;
}
