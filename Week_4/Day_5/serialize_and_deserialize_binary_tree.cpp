class Codec {
public:
    string serialize(TreeNode* root){
        if(root==NULL) return "";
        string result="";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                result+="N,";
                continue;
            }
            result+=to_string(curr->val)+",";
            q.push(curr->left);
            q.push(curr->right);
        }
        return result;
    }

    TreeNode* deserialize(string data){
        if(data=="") return NULL;
        stringstream ss(data);
        string str;
        getline(ss,str,',');
        TreeNode* root=new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            getline(ss,str,',');
            if(str!="N"){
                curr->left=new TreeNode(stoi(str));
                q.push(curr->left);
            }
            getline(ss,str,',');
            if(str!="N"){
                curr->right=new TreeNode(stoi(str));
                q.push(curr->right);
            }
        }
        return root;
    }
};