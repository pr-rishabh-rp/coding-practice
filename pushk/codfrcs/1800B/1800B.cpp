#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k, cn, br;
    cin >> t;
    string s;
    map<char, int> m;
    while(t--) {
        cin >> n >> k;
        cin >> s;
        cn = 0;
        br = 0;
        m.clear();
        for (int i=0; i<n; i++) {
            if (m.count(s[i]) > 0) {
                m[s[i]] += 1;
            }
            else {
                m.insert(make_pair(s[i], 1));
            }
            if (m[char(int(s[i]) - 32)]) {
                m[char(int(s[i]) - 32)] -= 1;
                m[s[i]] -= 1;
                br++;
            }
            if (m[(char(int(s[i]) + 32))]) {
                m[char(int(s[i]) + 32)] -= 1;
                m[s[i]] -= 1;
                br++;
            }
        }
        for (auto x : m) {
            if (x.second >=2) {
                cn += x.second/2;
            }
        }
        br += min(k, cn);
        cout << br << "\n";
    }
    
    return 0;
}