#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long twon = 0;
    cin >> n;
    if (n%2==0) {
        twon = n/2;
        twon = exp2(twon);
    }
    cout << twon << endl;
    return 0;
}