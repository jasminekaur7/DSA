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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0) return head;
        int n =0;
        ListNode* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }
        k%=n;
        if(k==0) return head;
                ListNode* slow = head;
                ListNode* fast = head;
                for(int cnt =0;cnt<k; cnt++)
                    fast = fast->next;
                    while(fast->next){
                        slow = slow->next;
                        fast = fast->next;
                    }
                    temp = slow->next;
                    slow->next = NULL;
                    fast->next=head;
                    return temp;
              } 
};