/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int ans = 0;
    
    int height(TreeNode* node){
        
        if(!node) return 0;
        
        int lheight = height(node->left);
        int rheight = height(node->right);
        
        
        ans = max(ans, 1+lheight+rheight);
        
        return 1+ max(lheight,rheight);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans-1;
    }
};
