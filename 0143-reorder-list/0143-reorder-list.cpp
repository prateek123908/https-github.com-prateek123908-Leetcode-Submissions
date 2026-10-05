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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow;
        while(curr!=NULL){
            slow=slow->next;
            curr->next=prev;
            prev=curr;
            curr=slow;
        }
        // ListNode* mid=prev;
        ListNode* n1=head;
        ListNode* n2=prev;

        while(temp!=prev){
            n1=n1->next;
            n2=n2->next;
            temp->next=prev;
            temp=n1;
            if(temp==prev){
                prev->next=NULL;
            }
            else{
                prev->next=temp;
                prev=n2;
            }
        }

    }
};