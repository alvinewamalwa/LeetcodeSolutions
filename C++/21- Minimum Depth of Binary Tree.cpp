class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<TreeNode*> nodes;
        nodes.push(root);
        int minDepth = 1, levelSize = 1, seenOnCurrentLevel = 0;
        while (!nodes.empty()){
            if (nodes.front()->left == nullptr && nodes.front()->right == nullptr){
                return minDepth;
            }

            seenOnCurrentLevel++;
            if (nodes.front()->left != nullptr)
               nodes.push(nodes.front()->left);
            if (nodes.front()->right != nullptr)
               nodes.push(nodes.front()->right);

            nodes.pop();

            if (levelSize == seenOnCurrentLevel){
                levelSize = nodes.size();
                seenOnCurrentLevel = 0;
                minDepth++;
            }
        }
        return -1;
    }
};