#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int k;
    cin >> k;
    vector<int> pos(8, -1);
    rep(i, k) {
        int r, c;
        cin >> r >> c;
        pos[r] = c;
    }

    vector<int> perm(8);
    rep(i, 8) perm[i] = i;

    int dr[4] = {-1, -1, 1, 1};
    int dc[4] = {-1, 1, -1, 1};

    do {
        bool ok = true;
        rep(i, 8) {
            if (pos[i] == -1) {
                continue;
            }
            if (pos[i] != perm[i]) {
                ok = false;
            }
        }
        if (!ok) {
            continue;
        }
        rep(i, 8) {
            rep(j, 4) {
                int cr = i + dr[j];
                int cc = perm[i] + dc[j];
                while (cr >= 0 && cr < 8 && cc >= 0 && cc < 8) {
                    if (perm[cr] == cc) {
                        ok = false;
                    }
                    cr += dr[j];
                    cc += dc[j];
                }
            }
        }
        if (ok) {
            break;
        }
    } while (next_permutation(perm.begin(), perm.end()));

    rep(i, 8) {
        rep(j, 8) {
            if (perm[i] == j) {
                cout << "Q";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
