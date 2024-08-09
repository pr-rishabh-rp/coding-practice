#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, u, v, count;
    cin >> t;
    multiset<int> s;
    while (t--) {
        cin >> n;
        s.clear();
        count=0;
        for (i=0; i<n-1; i++) {
            cin >> u >> v;
            s.insert(u);
            s.insert(v);
        }
        for (i=1; i<n+1; i++) {
            if (s.count(i)<2 && s.count(i)>0) {
                count++;
            }
        }
        cout << ((count % 2) == 0 ? count/2 : (count/2 + 1)) << "\n";
    }
    return 0;
}