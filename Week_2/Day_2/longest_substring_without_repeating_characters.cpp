class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen;
        int maxlength = 0;
        int l = 0;
        int n = s.length();
        int r=0;
        while(r < n) {
            char c = s[r];
            if (last_seen.count(c) && last_seen[c] >= l) {
                l = last_seen[c] + 1;
            }
            last_seen[c] = r;
            maxlength = max(maxlength, r - l + 1);
            r++;
        }
        return maxlength;
    }
};