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

     TreeNode* prev =NULL;
    int diff= INT_MAX;
    int dfs(TreeNode* root){
    if (root==NULL)
    return 0;
    if(root->left)
     dfs(root->left);

    if (prev)

    diff=min(diff, abs(prev->val- root->val));
    prev=root;
     if (root->right)
     dfs(root->right);
     return diff;
    }
    int getMinimumDifference(TreeNode* root) {
        return dfs(root);
    }
};