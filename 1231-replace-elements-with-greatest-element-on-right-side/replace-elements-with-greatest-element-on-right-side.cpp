class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxSofar = -1;

        for(int i = arr.size()- 1;i >= 0 ;--i) {
            int current = arr[i];
            arr[i] = maxSofar;
            maxSofar = max(maxSofar,current);
        }
        return arr;
    }
};