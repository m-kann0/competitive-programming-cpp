#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int w;
    cin >> w;

    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    rep(i, s.length()) {
        if (i != 0 && i % w == 0) {
            cout << endl;
        }
        cout << s[i];
    }
    cout << endl;

    return 0;
}
