#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (char s1 = '0'; s1 <= '9'; s1++) {
        for (char s2 = '0'; s2 <= '9'; s2++) {
            for (char s3 = '0'; s3 <= '9'; s3++) {
                char target[3] = {s1, s2, s3};
                int i = 0;
                int j = 0;
                while (i < s.size() && j < 3) {
                    if (s[i] == target[j]) {
                        j++;
                    }
                    i++;
                }
                if (j == 3) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
