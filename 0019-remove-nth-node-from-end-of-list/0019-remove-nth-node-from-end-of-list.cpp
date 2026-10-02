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
    ListNode* removeNthFromEnd(ListNode* head, int n) {      
        ListNode* dummy=new ListNode(0);
        dummy->next=head;        
        ListNode* temp1=dummy;        
        ListNode* temp2=dummy;        
        while(n>0){
             temp2=temp2->next;
             n--;
        }
        while(temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=temp1->next->next;
        return dummy->next;
        
    }
};