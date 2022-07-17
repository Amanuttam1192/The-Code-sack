class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);
        }else if(val < root->val){
            root->left = insertIntoBST(root->left, val);
        }else if(val > root->val){
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};
