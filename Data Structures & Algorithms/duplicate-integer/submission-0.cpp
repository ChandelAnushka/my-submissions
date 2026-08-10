class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i, j, save, flag = 0;
        for (i=0; i<nums.size(); i++) {
            save = nums[i];
            for (j=i+1; j<nums.size(); j++) {
                if (save == nums[j]) {
                    flag = 1;
                    return true;
                }
            }
        }
        if(flag==0)
        return false;
    }
};