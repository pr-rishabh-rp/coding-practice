#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> anagrams;

    // Group strings by their sorted version
    for (const string& str : strs)
    {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        anagrams[sorted_str].push_back(str);
    }

    // Collect the grouped anagrams
    vector<vector<string>> groupAnagrams;
    for (const auto& pair : anagrams)
    {
        groupAnagrams.push_back(pair.second);
    }

    // Print the grouped anagrams
    for (const auto& group : groupAnagrams)
    {
        for (const string& str : group)
        {
            cout << str << " ";
        }
        cout << "\n";
    }

    return 0;
}