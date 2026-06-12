class Solution {
public:
    int start = 0;
    int maxlen = 1; 
    void checkOdd(string &s, int i){
        int l = i, r = i;
        int n = s.length();
        while(l >= 0 && r < n && s[l] == s[r]){
            if(r - l + 1 > maxlen){
                start = l;
                maxlen = r - l + 1;
            }
            l--;
            r++;
        }
    }

    void checkEven(string &s, int i){
        int l = i, r = i + 1;
        int n = s.length();
        while(l >= 0 && r < n && s[l] == s[r]) {
            if(r - l + 1 > maxlen) {
                start = l;
                maxlen = r - l + 1;
            }
            l--;
            r++;
        }
    }
    
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";
        for (int i = 0; i < n; i++) {
            checkOdd(s, i);   
            checkEven(s, i);  
        }
        string ans = "";
        for(int i = start; i < start + maxlen; i++){
            ans += s[i];
        }
        return ans;
    }
};