class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int len = 1; len <= s.size()/2; len++){
            if(s.size() % len != 0) continue;
            bool flag = true;
            for(int i = len; i < s.size(); i++){
                if(s[i] != s[i%len]){
                    flag = false;
                    break;
                }
            }
            if(flag == true) return true;
        }
    return false;
};    