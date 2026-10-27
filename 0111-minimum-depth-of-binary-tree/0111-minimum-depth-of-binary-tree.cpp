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
    int minDepth(TreeNode* root) {
       if (root==NULL)
        return 0;
        int leftht= minDepth(root->left);
        int rightht= minDepth(root->right);
         if (root->left == NULL)
            return rightht + 1;

        if (root->right == NULL)
            return leftht + 1;
        return min(leftht, rightht)+1;
        
 
    }
};