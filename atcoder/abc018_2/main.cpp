#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    rep(i, n) {
        int l, r;
        cin >> l >> r;
        l--;
        for (int j = l; j < (l + r) / 2; j++) {
            int k = r - (j - l) - 1;
            char temp = s[j];
            s[j] = s[k];
            s[k] = temp;
        }
    }
    cout << s << endl;

    return 0;
}
