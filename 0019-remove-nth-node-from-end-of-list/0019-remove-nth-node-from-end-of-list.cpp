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
        ListNode* temp=head;        
        ListNode* dummy=new ListNode(0);
        dummy->next=head;        
         ListNode* t=dummy;
        int cnt=0;
        while(temp!=NULL){
             cnt++;
             temp=temp->next;
        }
        cnt=cnt-n;
        while(cnt>0 ){
            t=t->next;
            cnt--;
        }
        t->next=t->next->next;
        return dummy->next;
        
    }
};