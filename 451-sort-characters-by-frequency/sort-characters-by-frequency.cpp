class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;

        // Step 1: Count frequency of each character
        for(char c : s) {
            mpp[c]++;
        }

        // Step 2: Max-heap based on frequency
        priority_queue<pair<int,char>> q;
        for(auto it : mpp) {
            q.push({it.second, it.first}); 
        }

        // Step 3: Build result string
        string result = "";
        while(!q.empty()) {
            auto top = q.top();
            q.pop();
            int freq = top.first;
            char c = top.second;
            // Append char 'c' freq times
            result.append(freq, c);  
        }

        return result;
    }
};