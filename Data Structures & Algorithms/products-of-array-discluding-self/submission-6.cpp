class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, flag = 0, count = 0;
        for (int num: nums) {
            if (num != 0) {
                product = product * num;
            }
            else {
                flag = 1;
                count++;
            }
        }
        vector<int> result;
        if(count > 1) {
            vector<int> y(nums.size());
            return y;
        }
        for (int num: nums) {
            if (flag == 1 && num != 0) {
                result.push_back(0);
            }
            else if (flag == 1 && num == 0) {
                int n = product;
                result.push_back(n);
            } 
            else {
                int n = product/num;
                result.push_back(n);
            }
        }
        return result;
    }
};
