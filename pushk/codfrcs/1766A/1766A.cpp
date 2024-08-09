#include <bits/stdc++.h>
using namespace std;



int main() {
    long long T, ex;
    string n;
    cin >> T;
    while (T--) {
        cin >> n;
        ex = (n.length() - 1) * 9 + (n[0] - 48);
        cout << ex << "\n";
    }
    return 0;
}