class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        if (strs.empty()) return result;
        for(string s: strs) {
            result = result + to_string(s.size()) + ",";
        }
        result += "#";
        for(string s: strs) {
            result = result + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        if (s == "#") return {};
        vector<string> result;
        int i;
        string temp;
        for (i=0;i<s.size();i++) {
            if(s[i]=='#') {
                temp = s.substr(0, i);
                s = s.substr(i+1, s.size());
                break;
            }
        }
        vector<int> sizes;
        int j=0;
        for(i=0;i<temp.size();i++) {
            if(temp[i]==',') {
                sizes.push_back(stoi(temp.substr(j, i-j)));
                j=i+1;
            }
        }
        int count = 0;
        for (int sz : sizes) {
            result.push_back(s.substr(count, sz));
            count += sz;
        }

        return result;
    }
};
