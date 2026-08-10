class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i, n = nums.size();
        unordered_map<int, int> counts;
        for (i=0; i<n; i++) {
            counts[nums[i]]++;
        }
        vector<vector<int>> buckets(n + 1);

        for (auto& pair: counts) {
            buckets[pair.second].push_back(pair.first);
        }
        vector<int> result;
        for (i=n; i>=0; i--) {
            for (int element: buckets[i]) {
                if (result.size() == k)
                return result;

                result.push_back(element);
            }
        }
        return result;
    }
};
