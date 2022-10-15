class Solution {
public:
    int minDepth(TreeNode* root) {
        int l=9999,r=9999;
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)return 1;
        if(root->left)
         l=minDepth(root->left);
         if(root->right)
         r=minDepth(root->right);
        return 1+min(l,r);
        
    }
};
