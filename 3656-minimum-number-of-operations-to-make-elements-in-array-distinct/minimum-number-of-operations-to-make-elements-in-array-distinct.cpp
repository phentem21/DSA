class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int i = n - 1; i >= 0; i--) {
            if(mpp.find(nums[i]) != mpp.end()) {
                return i / 3 + 1;
            }
            mpp[nums[i]]++;
        }
        return 0;
    }
};