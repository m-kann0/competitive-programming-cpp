#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    vector<char> r(10, 'x');
    rep(i, a) {
        int p;
        cin >> p;
        r[p] = '.';
    }
    rep(i, b) {
        int p;
        cin >> p;
        r[p] = 'o';
    }

    cout << r[7] << " " << r[8] << " " << r[9] << " " << r[0] << endl;
    cout << " " << r[4] << " " << r[5] << " " << r[6] << endl;
    cout << "  " << r[2] << " " << r[3] << endl;
    cout << "   " << r[1] << endl;

    return 0;
}
