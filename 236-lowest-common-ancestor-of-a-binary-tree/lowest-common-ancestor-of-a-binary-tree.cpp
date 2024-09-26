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
    private:
    bool findPath(TreeNode* root, int val, vector<TreeNode*> &path){
        if (!root) return false;

        path.push_back(root);

        if (root->val == val){
            return true;
        }

        if ((root->left and findPath(root->left, val, path)) || root->right and findPath(root->right, val, path)){
            return true;
        }

        path.pop_back();

        return false;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> path1, path2;

        if (!findPath(root, p->val, path1) or !findPath(root, q->val, path2)){
            return NULL;
        }
        int i;
        for (i = 0;i<path1.size() && i<path2.size(); i++){
            if (path1[i]!=path2[i]) break;
        }

        return path1[i-1];

        
        
    }
};