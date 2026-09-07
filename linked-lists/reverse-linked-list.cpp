class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Problem: Reverse Linked List
// Time: O(n) | Space: O(1)
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;  
            head->next = prev;            
            prev = head;                  
            head = next;                  
        }
        return prev;   
    
    }
};
