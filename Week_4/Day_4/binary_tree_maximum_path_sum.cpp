class Solution {
public:
    int helper(TreeNode* root,int &maxSum){
        if(root==NULL) return 0;
        int left=max(0,helper(root->left,maxSum));
        int right=max(0,helper(root->right,maxSum));
        maxSum=max(maxSum,left+right+root->val);
        return root->val+max(left,right);
    }

    int maxPathSum(TreeNode* root){
        int maxSum=INT_MIN;
        helper(root,maxSum);
    return maxSum;
    }
};