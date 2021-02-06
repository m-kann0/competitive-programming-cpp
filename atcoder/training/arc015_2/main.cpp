#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> count(6, 0);
    rep(i, n) {
        double mx, mn;
        cin >> mx >> mn;
        if (mx >= 35) {
            count[0]++;
        }
        if (mx >= 30 && mx < 35) {
            count[1]++;
        }
        if (mx >= 25 && mx < 30) {
            count[2]++;
        }
        if (mn >= 25) {
            count[3]++;
        }
        if (mn < 0 && mx >= 0) {
            count[4]++;
        }
        if (mx < 0) {
            count[5]++;
        }
    }

    rep(i, 6) {
        if (i != 0) cout << " ";
        cout << count[i];
    }
    cout << endl;

    return 0;
}
