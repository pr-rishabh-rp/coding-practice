#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, ind, indmin;
    bool flaf;
    cin >> t;
    string s;
    while(t--) {
        cin >> n;
        cin >> s;
        ind = -2;
        indmin = -1;
        flaf = false;
        for (i=0; i<n; i++) {
            if (s[i]=='B') {
                if (i > ind) {
                    ind = i;
                }
                if (!flaf) {
                    flaf = true;
                    indmin = i;
                }
            }
        }
        if (ind >= indmin) {
            cout << ((ind - indmin + 1) > 0 ? (ind - indmin + 1) : 0) << "\n";
        }
    }
    return 0;
}