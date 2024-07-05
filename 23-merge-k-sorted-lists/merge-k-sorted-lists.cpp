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
    private:
    ListNode* merge(ListNode* head1, ListNode* head2){
        if (head1==NULL) return head2;
        if (head2==NULL) return head1;

        ListNode* dummyHead = new ListNode(0);
        ListNode* temp = dummyHead;

        while (head1!=NULL and head2!=NULL){
            if (head1-> val <= head2->val){
                temp->next= head1;
                head1=head1->next;
            }
            else{
                temp ->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }

        if (head1 != NULL){
            temp->next = head1;
        }
        else{
            temp->next = head2;
        }

        return dummyHead->next;

    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode* head = lists[0];

        for (int i = 1;i<lists.size();i++){
            head = merge(head, lists[i]);
        }

        return head;
        
    }
};