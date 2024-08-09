#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

using ll = long long;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string> strs_new = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> groupAnagrams;

    for (int i = 0; i < strs.size(); i++)
    {
        sort(strs_new[i].begin(), strs_new[i].end());
    }

    unordered_map<int, vector<string>> anagrams;

    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = i; j < strs.size(); j++)
        {
            if (strs_new[i] == strs_new[j])
            {
                anagrams[i].push_back(strs[j]);
            }
        }
    }

    for (int i = 0; i < anagrams.size(); i++)
    {
        for (int j = 0; j < anagrams[i].size(); j++)
        {
            groupAnagrams[i].push_back(anagrams[i][j]);
        }
    }

    for (int i = 0; i < groupAnagrams.size(); i++)
    {
        for (int j = 0; j < groupAnagrams[i].size(); j++)
        {
            cout << groupAnagrams[i][j] << " \n";
        }
        
    }
    
    


    
    return 0;
}