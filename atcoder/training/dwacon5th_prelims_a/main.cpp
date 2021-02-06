#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    rep(i, n) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }

    int total = 0;
    rep(i, n) total += a[i];

    int d = 100000;
    rep(i, n) d = min(d, abs(total - n * a[i]));

    rep(i, n) {
        if (abs(total - n * a[i]) == d) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
