class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for(const string& op : operations) {
            if(op == "C"){
                record.pop_back();
            } else if(op == "D") {
                record.push_back(2 * record.back());
            } else if(op == "+"){
                int n = record.size();
                record.push_back(record[n-2] + record[n-1]);
            } else {
                record.push_back(stoi(op));
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};