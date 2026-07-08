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
        vector <ListNode*> result;
        ListNode* curr=head;
        while(curr!=NULL){
            result.push_back(curr);
            curr = curr->next;
        }
        int k= result.size()-n;
        if(k==0){
           return head->next;
        }

        result[k-1]->next = result[k]->next;

        return head;


       

        
    }
};
