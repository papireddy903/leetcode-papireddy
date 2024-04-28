/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* ans;
    void helper(TreeNode* org, TreeNode* cloned, TreeNode* target){
        if (org==NULL) return;
        if (org==target) ans = cloned;
        helper(org->left, cloned->left, target);
        helper(org->right, cloned->right, target);
    }

public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        helper(original, cloned, target);
        return ans;
        

        
    }
};