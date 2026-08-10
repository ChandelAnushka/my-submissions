class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_map<int, int> hashMap;
        for(int i=0; i<nums.size(); i++) {
            hashMap[nums[i]] = i;
        }
        vector<int> startSeq;
        for(int i=0; i<nums.size(); i++) {
            if(!(hashMap.contains(nums[i]-1)) && hashMap.contains(nums[i]+1)) {
                startSeq.push_back(nums[i]);
            }
        }
        cout<<endl;
        int globalLargest=1, localLargest=1, number;
        for(int i=0; i<nums.size(); i++) {
        if(find(startSeq.begin(), startSeq.end(), nums[i]) != startSeq.end()) {
            number = nums[i] + 1;
            localLargest = 1;
            while(true) {
                if(hashMap.contains(number)) {
                    // cout<<"number now is"<<number<<" ";
                    localLargest++;
                } else {
                    break;
                }
                number++;
            }
        }
        if (localLargest > globalLargest) globalLargest = localLargest;
        }
        return globalLargest;
    }
};
