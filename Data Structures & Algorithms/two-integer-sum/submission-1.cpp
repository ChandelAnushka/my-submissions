class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        int i, diff;
        for (i=0; i<nums.size(); i++) {
            diff = target - nums[i];
            if(hashMap.contains(diff)) {
                return {hashMap[diff], i};
            } 
            else {
                hashMap.insert({nums[i], i});
            }
        }
        return {};
    }
};
