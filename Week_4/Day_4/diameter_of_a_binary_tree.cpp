class Solution {
public:
    int height(TreeNode* root, int& diameter) {
        if(root == NULL) return 0;
        int leftHeight = height(root->left, diameter), rightHeight = height(root->right, diameter);
        diameter = max(diameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root){
        int diameter=0;
        height(root, diameter);
    return diameter;
    }
};