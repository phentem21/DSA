class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;

        for(int i = 0; i < strs.size();i++) {
            string s = strs[i];

            int count[26] = {0};
            for(int j = 0; j < s.size() ; j++) {
                count[s[j] - 'a']++;
            }

            string key = "";
            for (int k = 0; k < 26;k++) {
                key += to_string(count[k]) + "#";
            }

            groups[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto it = groups.begin();it != groups.end();it++) {
            result.push_back(it->second);
        }
        return result;
    }
};