class Solution {
public:
    int maximumGap(vector<int>& nums) {
    if(nums.size() < 2) return 0;
    sort(nums.begin() , nums.end());
    int max = INT_MIN;
    for(int x = 0 ; x < nums.size()-1 ; x++ )
    {
        if(max < nums[x+1] - nums[x])
            {
                max = nums[x+1] - nums[x] ;
            }
    }
    return max;        
    }
};