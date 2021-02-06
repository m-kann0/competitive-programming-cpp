#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) {
         cin >> a[i];
         a[i]--;
    }

    int ans = 0;
    rep(i, N) {
        if (i == a[a[i]]) {
            ans++;
        }
    }
    ans /= 2;
    cout << ans << endl;
}
