#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> letterCombinations(string digits) {
    unordered_map<int, vector<char>> phone;

    phone[2] = {'a', 'b', 'c'};
    phone[3] = {'d', 'e', 'f'};
    phone[4] = {'g', 'h', 'i'};
    phone[5] = {'j', 'k', 'l'};
    phone[6] = {'m', 'n', 'o'};
    phone[7] = {'p', 'q', 'r', 's'};
    phone[8] = {'t', 'u', 'v'};
    phone[9] = {'w', 'x', 'y', 'z'};

    

    vector<string> result;
    
    return result;
}

int main() {
    string digits = "23";
    vector<string> result = letterCombinations(digits);

    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}
