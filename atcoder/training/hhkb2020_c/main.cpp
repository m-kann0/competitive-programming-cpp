#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    vector<bool> used(200001, false);
    int c = 0;
    rep(i, n) {
        used[p[i]] = true;
        while (used[c]) {
            c++;
        }
        cout << c << endl;
    }

    return 0;
}
