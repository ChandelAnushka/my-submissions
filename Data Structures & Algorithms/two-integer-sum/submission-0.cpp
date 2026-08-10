class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        int i, diff;
        vector<int> result;
        for (i=0; i<nums.size(); i++) {
            diff = target - nums[i];
            if( hashMap.find(diff) != hashMap.end()) {
                result.push_back(hashMap[diff]);
                result.push_back(i);
                return result;
            } 
            else {
                hashMap.insert({nums[i], i});
            }
        }
        return result;
    }
};
