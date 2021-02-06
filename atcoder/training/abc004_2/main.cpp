#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    vector<vector<char>> a(4);
    rep(i, 4) {
        vector<char> b(4);
        rep(j, 4) cin >> b[j];
        a[i] = b;
    }

    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            cout << a[i][j];
            if (j > 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
