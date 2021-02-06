#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
        a[i]--;
    }

    int ans = 0;
    int current = 0;
    rep(i, n + 5) {
        if (current == 1) {
            cout << ans << endl;
            return 0;
        }
        current = a[current];
        ans++;
    }
    cout << -1 << endl;
    return 0;
}
