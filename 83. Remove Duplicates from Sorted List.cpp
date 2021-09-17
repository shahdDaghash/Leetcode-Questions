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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        
        ListNode *currentNode = head->next;
        ListNode *prev = head;
        
        while(currentNode->next != NULL){
            if(currentNode->val == prev->val){
                prev->next = currentNode->next;
                currentNode = prev->next;
                
            }
            else{
                currentNode = currentNode->next;
                prev = prev->next;
            }
        }
        
        if(currentNode->val == prev->val){
                prev->next = currentNode->next;
                currentNode = prev->next;
                
            }
        
        return head;
    }
};
