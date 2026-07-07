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
    bool hasCycle(ListNode* curr) {
        // unordered_set<ListNode*> visited;// In this case the  spac 
        //compleixity of  of the code is o(N) due to use of new stl
        // 
        // ListNode* head=curr;
        // while(head!=NULL){
        //     if(visited.find(head) != visited.end()){
        //         return true;
        //     }
        //     visited.insert(head);
        //     head=head->next;
        // }

        // return false;

        ListNode* fast = curr;
        ListNode* slow = curr;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }

        }

        return false;

        
    }
};
