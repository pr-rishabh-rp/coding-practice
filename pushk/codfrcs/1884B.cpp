#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, ct, curr,w;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        curr=0;
        w=0;
        //Count number of moves to bring wth0 to ith position
        for (int i=0; i<n; i++) {
            if (s[n-1-i]=='0') {
                curr += (i-w);
                w++;
                cout << curr << " ";
            }
        }
        for (int i=0; i<(n-w); i++) {
            cout << "-1 ";
        }
        cout << "\n";
    }
    return 0;
}