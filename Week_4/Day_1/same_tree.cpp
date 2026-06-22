class Solution {
public:
    void traverse(TreeNode* root, vector<int>& res){
        if(root == NULL){
            res.push_back(INT_MIN);
            return;
        }
        res.push_back(root->val);
        traverse(root->left, res);
        traverse(root->right, res);   
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> t1, t2;
        traverse(p, t1);
        traverse(q, t2);
    return t1 == t2;
    }
};