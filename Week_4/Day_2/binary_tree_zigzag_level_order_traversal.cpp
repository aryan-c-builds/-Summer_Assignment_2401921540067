class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int size=q.size();            
            vector<int> level(size);
            for(int i=0;i<size;i++){               
                TreeNode* temp=q.front();
                q.pop();               
                int idx=flag ? i : size-i-1;
                level[idx]=temp->val;               
                if(temp->left) q.push(temp->left);            
                if(temp->right) q.push(temp->right)
            }
            flag=!flag;
            ans.push_back(level);
        }
    return ans;
    }
};