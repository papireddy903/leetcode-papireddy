/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        int counter = 0;
        bool component = false;
        ListNode* temp = head;
        while (temp){
            if (count(nums.begin(), nums.end(), temp->val)>0 && component==false){
                counter++;
                component = true;
            }
            else if (!(count(nums.begin(),nums.end(),temp->val))){
                component = false;
                

            }
            temp = temp->next;
        }
        return counter;

        
    }
};