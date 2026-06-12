class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for(string &str : strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groups[sortedStr].push_back(str);
        }
        vector<vector<string>> result;
        for(auto& it : groups) result.push_back(it.second);
    return result;
    }
};