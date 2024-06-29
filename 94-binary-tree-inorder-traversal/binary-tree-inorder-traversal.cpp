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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if (root==NULL) return inorder;
        stack<TreeNode* > st;

        while (true){
            if (root!=NULL){
                st.push(root);
                root = root->left;
            }
            else{
                if (st.empty()==true) break;
                
                TreeNode* temp = st.top();
                st.pop();
                inorder.push_back(temp->val);
                root = temp->right;
            }
        }
        return inorder;
        
        // return inorder;
        
    }
};