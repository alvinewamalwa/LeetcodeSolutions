class Solution {
public:
    int getHeight(TreeNode* root) {
        if(!root) return 0;
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        int balanceFactor = abs(leftHeight-rightHeight);
        if(balanceFactor > 1 || leftHeight == -1 || rightHeight == -1) return -1;
        return 1 + max(leftHeight,rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return getHeight(root) == -1 ? false : true;
        
    }
};