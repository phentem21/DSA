class Solution {
public:
    bool doesAliceWin(string s) {
        int vowels = 0;
        set<char> vow = {'a','e','i','o','u'};
        for(char& c:s){
            if(vow.count(c))vowels++;
        }
        if(vowels==0)return false;
        else return true;
    }
};