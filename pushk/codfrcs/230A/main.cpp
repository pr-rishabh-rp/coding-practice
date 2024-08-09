#include <map>
#include <iostream>
using namespace std;

int main() {
    int c=0, i;
    string sen;
    cin >> sen;
    map<char,int> count;
    for (i=0; sen[i]!='\0'; i++){
        count[sen[i]]++;
    }
    for (auto kvp: count) {
        c++;
    }
    if (c%2 != 0) {
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}