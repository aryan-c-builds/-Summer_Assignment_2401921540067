class Solution {
public:
    unordered_map<int,int> mp;

    TreeNode* helper(vector<int>& preorder,vector<int>& inorder,int preStart,int preEnd,int inStart,int inEnd){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode* root=new TreeNode(preorder[preStart]);
        int idx=mp[root->val];
        int leftSize=idx-inStart;
        root->left=helper(preorder,inorder, preStart+1, preStart+leftSize, inStart,idx-1);
        root->right=helper(preorder,inorder, preStart+leftSize+1, preEnd, idx+1,inEnd);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder){
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        return helper(preorder,inorder, 0,preorder.size()-1, 0,inorder.size()-1);
    }
};