//Neetcode.io question

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, b, mult, bmult, prev, fwd;
    vector<int> v, vf, vb;
    cin >> t;
    while (t--) {
        cin >> n;
        v.clear();
        vf.clear();
        vb.clear();
        for (int i=0; i<n; i++) {
            cin >> b;
            v.push_back(b);
        }
        mult = 1;
        bmult = 1;
        for (int i=0; i<n; i++) {
            mult = mult * v[i];
            bmult = bmult * v[n-i-1];
            vf.push_back(mult);
            vb.push_back(bmult);
        }
        prev = 1;
        fwd = 1;
        for (int i=0; i<n; i++) {
            // 2 6 24
            // 4 12 24
            prev = i < 1 ? 1 : vf[i-1];
            fwd = i > n-2 ? 1 : vb[n-i-2];
            cout << (prev * fwd) << " ";
        }
        cout << "\n";
    }
    return 0;
}