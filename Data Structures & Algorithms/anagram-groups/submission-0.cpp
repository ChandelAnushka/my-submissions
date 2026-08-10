class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int i,j;
        string temp;
        std::unordered_map<string, vector<string>> hashMap;
        for (i=0; i<strs.size();  i++) {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            hashMap[temp].push_back(strs[i]);
        }
        for (auto& pair: hashMap) { 
            result.push_back(pair.second);
        }
        return result;
    }
};
