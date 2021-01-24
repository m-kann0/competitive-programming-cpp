#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int red = 0;
    int blue = 0;
    rep(i, n) {
        string s;
        cin >> s;
        rep(j, n) {
            if (s[j] == 'R') {
                red++;
            }
            if (s[j] == 'B') {
                blue++;
            }
        }
    }
    if (red > blue) {
        cout << "TAKAHASHI" << endl;
    } else if (red < blue) {
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
    return 0;
}
