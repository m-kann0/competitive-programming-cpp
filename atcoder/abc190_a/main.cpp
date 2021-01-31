#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        cout << "Takahashi" << endl;
    } else if (a < b) {
        cout << "Aoki" << endl;
    } else if (c == 0) {
        cout << "Aoki" << endl;
    } else {
        cout << "Takahashi" << endl;
    }

    return 0;
}
