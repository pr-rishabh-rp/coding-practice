//WIP
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, 
        pair<int, int>& b) 
{ 
    return a.second < b.second; 
} 

int main() {
    long long t, n, i, b, count, curr, sum;
    vector<pair<long long, int>> vec, vec2;
    cin >> t;
    while(t--) {
        cin >> n;
        sum = 0;
        for (i=0; i<n; i++) {
            cin >> b;
            vec.push_back(pair(b, i));
            sum += b;
        }
        sort(vec.begin(), vec.end());
        vec2.push_back(pair(vec[n-1].second, n-1));
        for (i=n-1; i>0; i--) {
            if (sum >= vec[i].first) {
                vec2.push_back(pair(vec[i-1].second, i));
            }
            else {
                vec2.push_back(pair(vec[i-1].second, i-1));
            }
            sum -= vec[i].first;
        }
        sort(vec2.begin(), vec2.end());
        for (auto x: vec2) {
            cout << x.first << "\n";
        }
    }
    return 0;
}