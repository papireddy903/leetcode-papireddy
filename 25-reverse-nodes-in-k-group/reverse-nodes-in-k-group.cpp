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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* temp;
        while(cur!=NULL){
            temp = cur->next;
            cur->next = prev;
            prev =cur;
            cur = temp;


        }
        return prev;

    }

    ListNode* getKthNode(ListNode* head, int k){

        ListNode* temp = head;
        while (k>1 and temp!=NULL){
            temp = temp->next;
            k--;
        }
        return temp;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevLast = NULL;
        while (temp!=NULL){
            ListNode* kThNode = getKthNode(temp,k);
            if (kThNode == NULL){
                if (prevLast) prevLast->next = temp;
                break; 

            }

            ListNode* nextnode = kThNode->next;
            kThNode->next = NULL;
            reverseList(temp);

            if (temp == head){
                head = kThNode;
            }
            else{
                prevLast->next = kThNode;
            }

            prevLast = temp;
            temp = nextnode;
        }
        return head;






        
    }
};