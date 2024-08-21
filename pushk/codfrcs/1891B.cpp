#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, q, max, p, min;
    vector<long long> v, f, ind;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        v.clear();
        f.clear();
        ind.clear();
        max=0;
        for (int i=0; i<n; i++) {
            cin >> b;
            v.push_back(b);
            if (b%2==0) {
                ind.push_back(i);
                if (b>max) max=b;
            }
        }
        min=30;
        for (int i=0; i<q; i++) {
            cin >> b;
            f.push_back(b);
            if (b < min) min=b;
            else continue;
            for (auto x: ind) {
                p = pow(2, b);
                if (p > max) {
                    break;
                }
                if (v[x] % p == 0) {
                    v[x] += pow(2, b-1);
                }
            }
        }
        for (auto y: v) {
            cout << y << " ";
        }
        cout << '\n';
    }
    return 0;
}