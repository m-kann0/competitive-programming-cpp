#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int x = 1;
    int add = 2;
    while (x < n) {
        x += add;
        add += 1;
    }

    if (x != n) {
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> result(add);
    int d = 1;
    for (int i = 0; i < add; i++) {
        for (int j = i + 1; j < add; j++) {
            result[i].push_back(d);
            result[j].push_back(d);
            d++;
        }
    }

    cout << "Yes" << endl;
    cout << result.size() << endl;
    for (auto v : result) {
        cout << v.size();
        for (auto a : v) {
            cout << " " << a;
        }
        cout << endl;
    }

    return 0;
}
