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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* prev = head;
        ListNode* cur = head->next;
        ListNode* fast = cur->next;
        int ind = 1;
        vector<int> critical;

        while (fast!=NULL){

            if ((cur->val > prev->val and cur->val > fast->val) or (cur->val < prev->val and cur->val < fast->val)){
                critical.push_back(ind);
            }
            ind++;
            prev = cur;
            cur = fast;
            fast = fast->next;


        }

        if (critical.size() < 2) return {-1,-1};

        int mini = INT_MAX;
        int maxi = critical.back() - critical.front();

        for (int i = 1;i<critical.size();i++){
            mini = min(mini, critical[i] - critical[i-1]);
        }

        return {mini, maxi};
        
    }
};