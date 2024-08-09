#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long n, min, a, b;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        if (a > b) {
            cout << "1\n";
        }
        else {
            min = n%a==0 ? n/a : (n/a) + 1;
            cout << min << "\n";
        }
    }
}