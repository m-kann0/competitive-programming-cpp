#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string x;
    cin >> x;

    while (x.size() > 0) {
        if (x.size() >= 2 && x[0] == 'c' && x[1] == 'h') {
            x.erase(0, 2);
            continue;
        }
        if (x[0] == 'o' || x[0] == 'k' || x[0] == 'u') {
            x.erase(0, 1);
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}
