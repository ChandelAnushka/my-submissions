class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i, j, save, flag = 0;
        std::unordered_set<int> hashSet;

        for (i=0; i<nums.size(); i++) {
            if (hashSet.find(nums[i]) != hashSet.end()) 
            {
                flag = 1;
                return true;
            }
            hashSet.insert(nums[i]);
        }
        if(flag==0)
        return false;
    }
};