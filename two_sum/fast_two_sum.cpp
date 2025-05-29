#include <unordered_map>

class Solution {
public:
    //O(n) solution
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen = {{nums[0], 0}};
        for(int i = 1; i < nums.size(); i++){
            if (seen.find(target - nums[i]) != seen.end()){
                return {i, seen[target - nums[i]]};
            }
            seen.insert({nums[i], i});
        }
        return {};
    }
};
