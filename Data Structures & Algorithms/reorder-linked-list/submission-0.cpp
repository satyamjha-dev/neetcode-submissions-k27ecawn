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
        vector<ListNode*> newlist;
        
        ListNode* curr = head;
        while(curr){
            newlist.push_back(curr);
            curr=curr->next;
        }
        vector<ListNode*> result;
        for(int i = 0; i <newlist.size(); i++) {
            if(i%2==0){
                result.push_back(newlist[i/2]);
            }else{
                result.push_back(newlist[newlist.size()-1-(i/2)]);
            }
            
        }
        for(int i = 0; i < result.size()-1; i++){

        result[i]->next = result[i+1];

    }

    result[result.size()-1]->next = NULL;
        

        
    }
};
