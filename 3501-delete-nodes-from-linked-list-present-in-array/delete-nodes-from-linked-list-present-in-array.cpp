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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mp(nums.begin(),nums.end());
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* prev = newHead;
        ListNode* cur = head;

        while (cur!=NULL){
            if (mp.find(cur->val)!=mp.end()){
                prev->next = cur->next;
                delete cur;
            }
            else{
                prev = cur;
            }

            cur = prev->next;
        }

        return newHead->next;
        
        
    }
};