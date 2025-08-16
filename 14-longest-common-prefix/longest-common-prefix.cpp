class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        sort(strs.begin(), strs.end());

        string ans="";
        int n=min(strs[0].size(), strs[size-1].size());

        for(int i=0; i<n; i++){
            if(strs[0][i]==strs[size-1][i])
                ans+=strs[0][i];
            else 
                break;
        }

        return ans;
    }
};