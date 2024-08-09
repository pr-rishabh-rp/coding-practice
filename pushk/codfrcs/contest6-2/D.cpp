//WIP

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, u, v, min, max, q, x, y, j;
    cin >> t;
    vector<int> vec;
    set<int> vec2;
    bool flaf;
    while(t--) {
        cin >> n;
        u = -1;
        min = INT_MAX;
        max = -1;
        vec.clear();
        vec2.clear();
        for (i=0; i<n; i++) {
            v = u;
            cin >> b;
            vec.push_back(b);
            u = b;
            if (!(v+1)) {
                continue;
            }
            else {
                if (u != v) {
                    if ((i-1) < min) {
                        min = i-1;
                    }
                    if (i > max) {
                        max = i;
                    }
                    vec2.insert(i);
                    vec2.insert(i+1);
                }
            }
        }
        min++;
        max++;
        cin >> q;
        cout << "min " << min << " " << max << "\n";
        for (i=0; i<q; i++) {
            cin >> x >> y;
            flaf = false;
            if (!(x < max && y > min)) {
                cout << "-1 -1\n";
            }
            else {
                j=x;
                while (j < y) {
                    if (vec2.count(j) && vec2.count(j+1)) {
                        cout << j << " " << j+1 << "\n";
                        flaf = true;
                        break;
                    }
                    else {
                        j++;
                    }
                }
                if (!flaf) {
                      cout << "-1 -1\n";
                }
            }
        }

    }
    return 0;
}