#include <bits/stdc++.h>
using namespace std;



int main() {
    int T, n, c, d, cost, max;
    multiset<int> v;
    cin >> T;
    while (T--) {
        cin >> n >> c;
        v.erase(v.begin(), v.end());
        max = 0;
        for (int i=0; i<n; i++) {
            cin >> d;
            if (max < d) max = d;
            v.insert(d);
        }
        cost = 0;
        for (int i=1; i<=max; i++) {
            cost = cost + ((1*v.count(i)) < c ? 1*v.count(i) : c);
        }
        cout << cost << "\n";
    }
    return 0;
}