#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    int x1, y1, x2, y2, dx, dy, diag, u, v;
    cin >> s;
    cin >> t;
    x1 = int(s[0]) - 96;
    y1 = int(s[1]) - 48;
    x2 = int(t[0]) - 96;
    y2 = int(t[1]) - 48;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    diag = abs(dx) > abs(dy) ? abs(dy) : abs(dx);
    u = abs(dx) > abs(dy) ? abs(dx) - abs(dy) : abs(dy) - abs(dx);
    cout << (u+diag) << "\n";
    while (diag > 0) {
        if (dx > 0) {
            if (dy > 0) {
                cout << "RU\n";
            }
            else {
                cout << "RD\n";
            }
        }
        else {
            if (dy > 0) {
                cout << "LU\n";
            }
            else {
                cout << "LD\n";
            }
        }
        diag--;
    }
    while(u>0) {
        if (abs(dx) > abs(dy)) {
            if (dx > 0) {
                cout << "R\n";
            }
            else {
                cout << "L\n";
            }
        }
        else {
            if (dy > 0) {
                cout << "U\n";
            }
            else {
                cout << "D\n";
            }
        }
        u--;
    }
    return 0;
}