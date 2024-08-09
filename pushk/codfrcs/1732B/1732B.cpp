#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, min;
    string sen;
    bool flag;
    cin >> t;
    while(t--) {
        min = 0;
        flag = false;
        cin >> n;
        cin >> sen;
        sen = sen + sen[n-1];
        for (int i=(n-1); i>=0; i--) {
            if (sen[i] == sen[i+1]) {
                continue;
            }
            else {
                if (sen[i] == '0') {
                    flag = true;
                    continue;
                }
                else {
                    if (flag) {
                        min += 2;
                    }
                    else {
                        min += 1;
                    }
                }
            }
        }
        cout << min << '\n';
    }

    return 0;
}