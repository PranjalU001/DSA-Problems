#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                if (result.empty() || result.back() != nums[i]) {
                    result.push_back(nums[i]);
                }
            }
        }
        return result;
    }
};
