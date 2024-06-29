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
    void assignParents(unordered_map<TreeNode*, TreeNode*> &parents, TreeNode* root, TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if (front->left!=NULL){
                parents[front->left] = front;
                q.push(front->left);
            }
            if (front->right!=NULL){
                parents[front->right] = front;
                q.push(front->right);
            }
        }

    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parents;
        assignParents(parents,root,target);
        
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode* > q;
        q.push(target);
        int level = 0;
        visited[target] = true;

        while (!q.empty()){
            int size = q.size();
            if (level == k) break;
            level++;

            for (int i = 0;i<size;i++){
                TreeNode* current = q.front();
                q.pop();
                if (current->left and !visited[current->left]){
                    q.push(current->left);
                    visited[current->left] = true;
                }

                if (current->right and !visited[current->right]){
                    q.push(current->right);
                    visited[current->right] = true;
                }

                if (parents[current] and !visited[parents[current]]){
                    q.push(parents[current]);
                    visited[parents[current]] = true;
                }

            }
        }

        vector<int> ans;

        while (!q.empty()){
            TreeNode* current = q.front();
            q.pop();
            ans.push_back(current->val);
        }
        return ans;
    }
};