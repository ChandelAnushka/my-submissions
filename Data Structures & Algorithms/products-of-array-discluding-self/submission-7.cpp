class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i, n = nums.size();
        vector<int> res(n);
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0] = 1;
        for (i=1; i<n; i++) {
            pref[i] = nums[i-1] * pref[i-1];
        }
        suff[n-1] = 1;
        for (i = n-2;  i>=0; i--) {
            suff[i] = suff[i+1] * nums[i+1];
        }
        for (i=0; i<n; i++) {
            res [i] = pref[i] * suff[i];
        }
        return res;
    }
};
