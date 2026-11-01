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
   bool cheak(TreeNode* root1, TreeNode* root2){
      if(root1==NULL and root2 ==NULL)
       return true;
      if (root1== NULL or root2==NULL)
        return false;

     if (root1->val!= root2->val){
        return false;
     }

     bool r1=cheak(root1->left, root2->right);
     bool r2= cheak(root1->right, root2->left);
     return r1 and r2;    
   }
    bool isSymmetric(TreeNode* root) {
        if (!root){
            return true;
        }
        
       return cheak(root->left, root->right);

    }
};