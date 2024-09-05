#include <iostream>
#include <vector>
#include <unordered_set>

int longestConsecutive(const std::vector<int>& nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;

    for (int num : numSet) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = std::max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}

int main() {
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = longestConsecutive(nums);
    std::cout << "Longest consecutive subsequence length: " << result << std::endl;

    return 0;
}
