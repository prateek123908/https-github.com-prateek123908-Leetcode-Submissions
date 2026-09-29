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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp3=l1;
        ListNode* prev=nullptr;
        vector<int>a;
        vector<int>b;
        while(temp1!=NULL){
           a.push_back(temp1->val);
           temp1=temp1->next;
        }
        while(temp2!=NULL){
           b.push_back(temp2->val);
           temp2=temp2->next;
        }
        // while(a.size()<b.size()){
        //     a.push_back(0);
        // }
        // while(a.size()>b.size()){
        //     b.push_back(0);
        // }
        vector<int>ans(max(a.size(),b.size()));
        int carry=0;
         for(int i=0;i<min(a.size(),b.size());i++){
            ans[i]=(a[i]+b[i]+carry)%10;
            carry=(a[i]+b[i]+carry)/10;
         }
         if(a.size()>b.size()){
         for(int i=b.size();i<a.size();i++){
               ans[i]=(a[i]+carry)%10;
               carry=(a[i]+carry)/10;
         }
         }
         else{
            for(int i=a.size();i<b.size();i++){
               ans[i]=(b[i]+carry)%10;
               carry=(b[i]+carry)/10;
         }
         }

         if(carry>0) ans.push_back(carry);
          int i=0;
         while(temp3!=NULL){
              temp3->val=ans[i];
              i++;
              prev=temp3;
              temp3=temp3->next;
         }
        while(i<ans.size()){
            prev->next=new ListNode(ans[i]);
            prev=prev->next;
            i++;
        }
        
        return l1;
    }
};