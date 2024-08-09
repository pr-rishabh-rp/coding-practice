#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    if (n==1) {
        if (a==b) {
            cout << "1\n" << a << ":" << b;
        }
        else {
            cout << "0\n" << a << ":" << b;
        }
    }
    else {
        if ((a+b) < n) {
            cout << (n-(a+b)) << "\n";
        }
        else {
            cout << "0\n";
        }
        while (n--) {
            if (a>0 && n>1) {
                cout << "1:0\n";
                a--;
            }
            else if (a>0 && n>0 && b>0) {
                cout << a << ":0\n";
                a=0;
            }
            else if (a>0 && n>=0 && b==0) {
                if (n>0) {
                    cout << "1:0\n";
                    a--;
                }
                else {
                    cout << a << ":0\n";
                    a=0;
                }
            }
            else if (a==0 && n>0 && b>0) {
                cout << "0:1\n";
                b--;
            }
            else {
                cout << "0:" << b << "\n";
            }
        }
    }
}