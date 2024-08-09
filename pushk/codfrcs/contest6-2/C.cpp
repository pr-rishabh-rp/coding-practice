#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, m, k, curr, n1, m1, com;
    cin >> t;
    vector<int> vec, vec2;
    while(t--) {
        cin >> n >> m >> k;
        n1 = 0;
        m1 = 0;
        com = 0;
        vector<int> bol (k, 0);
        vector<int> bol2 (k, 0);
        for (i=0; i<n; i++) {
            cin >> b;
            vec.push_back(b);
            if (b <= k) {
                bol[b-1] = 1;
                n1++;
            }
        }
        for (i=0; i<m; i++) {
            cin >> b;
            vec2.push_back(b);
            if (b <= k) {
                bol2[b-1] = 1;
                m1++;
                if (bol[b-1] && bol2[b-1]) {
                    com++;
                }
            }
        }
        bol2.clear();
        bol.clear();
    }
    return 0;
}