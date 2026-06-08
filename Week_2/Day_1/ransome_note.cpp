class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};
        for(char c:magazine) freq[c-'a']++;//count characters in magazine
        for(char c:ransomNote){//use characters for ransomNote
            if(freq[c-'a'] == 0) return false;//if character not available
            freq[c-'a']--;//use one occurrence of character
        }
    return true;        
    }
};