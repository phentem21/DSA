class Solution {
public:
    int maxDepth(string s) {
        int maxx = 0, cnt = 0;
        for (auto c: s)
        {
            if (c == '(')
                cnt++;
            else if (c == ')')
                cnt--;
            maxx = max(maxx, cnt);
        }
        return maxx;
    }
};