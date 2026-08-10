class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> first;
        unordered_map<char, int> second;

        for(int i=0;i<s.size();i++) {
            if(first.find(s[i]) != first.end()) {
                first[s[i]] = first[s[i]] + 1;
            }
            else
            {
                first.insert({s[i], 1});
            }
        }

        for(int i=0;i<t.size();i++) {
            if(second.find(t[i]) != second.end()) {
                second[t[i]] = second[t[i]] + 1;
            }
            else
            {
                second.insert({t[i], 1});
            }
        }

        if (first == second) {
            return true;
        }
        return false;
    }
};



