class Solution {
public:
    string decode(string &s, int &idx){
        string result;
        int repeatCount = 0;
        while(idx < s.size()){
            if(s[idx] >= '0' && s[idx] <= '9'){
                repeatCount = repeatCount * 10 + (s[idx] - '0');
            }
            else if(s[idx] == '['){
                idx++;
                string decodedPart = decode(s, idx);
                while(repeatCount--) result += decodedPart;
                repeatCount = 0;
            }
            else if(s[idx] == ']') return result;
            else result += s[idx];
            idx++;
        }
        return result;
    }
    string decodeString(string s) {
        int idx = 0;
    return decode(s, idx);
    }
};