class Solution {
public:
    //O(n^2) solution
    vector<int> slowTwoSum(vector<int>& nums, int target) {
        for(int slow_pointer = 0; slow_pointer < nums.size(); slow_pointer++){
            for (int fast_pointer = slow_pointer + 1;  fast_pointer < nums.size(); fast_pointer++) {
                if (nums[slow_pointer] + nums[fast_pointer] == target){
                    return {slow_pointer, fast_pointer};
                }
            }
        }
        return {};
    }
};
