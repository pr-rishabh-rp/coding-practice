#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, j, si, k;
    cin >> t;
    vector<int> vec;
    multiset<int> et;
    string s;
    while(t--) {
        cin >> n;
        vec.clear();
        et.clear();
        si = 0;
        s = "";
        k=0;
        j=0;
        for (i=0; i<n; i++) {
            cin >> b;
            vec.push_back(b);
            if (b == 0) {
                et.insert(b);
            }
            if (et.count(vec[i])) {
                et.insert(vec[i] + 1);
                s += char(et.count(vec[i] + 1) + 96);
            }
        }
        cout << s << "\n";
    }
    return 0;
}