#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int T;
    int n, i, c;
    char w;
    vector<char> vec;
    vector<char> vec2;
    vector<char> vec3;
    cin >> T;
    while(T--) {
        cin >> n;
        vec.resize(n);
        vec2.clear();
        for (i=0; i<n; i++) {
            cin >> vec[i];
        }
        for (i=0; i<n; i++){
            if (vec[n-1-i] == '0') {
                vec.pop_back();
                c = ((int)(vec[n-3-i]) - 48)*10 + ((int)(vec[n-2-i])-48);
                w = (char)(c + 96);
                vec2.push_back(w);
                vec.pop_back();
                vec.pop_back();
                i+=2;
            }
            else {
                c = (int)(vec[n-1-i]) - 48;
                w = (char)(c+96);
                vec2.push_back(w);
                vec.pop_back();
            }
        }
        vec3.assign(vec2.rbegin(), vec2.rend());
        for (auto& o: vec3) {
            cout << o;
        }
        cout << endl;
    }
    return 0;
}