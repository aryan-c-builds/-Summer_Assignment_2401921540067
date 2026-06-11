class Solution {
public:
    vector<string> result;
    void recurse(string& curr, int openCnt, int closeCnt, int n) {
        if(curr.size()==2*n){
            result.push_back(curr);
            return;
        }
        if(openCnt < n){
            curr.push_back('(');
            recurse(curr, openCnt + 1, closeCnt, n);
            curr.pop_back();
        }
        if(closeCnt < openCnt){
            curr.push_back(')');
            recurse(curr, openCnt, closeCnt + 1, n);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr;
        recurse(curr, 0, 0, n);
    return result;
    }
};