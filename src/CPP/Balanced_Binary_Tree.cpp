class Solution {
public:
int height(TreeNode*root){
    if(root==NULL)return 0;
    return max(height(root->left),height(root->right))+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1)return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
