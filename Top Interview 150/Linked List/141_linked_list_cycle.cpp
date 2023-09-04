/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};

/**
 * 2023-09-03
 * Yvecca
 * 141. Linked List Cycle
 * Floyd's Cycle-Finding Algorithm
 * Use two pointers Fast and Slow, traverse linked list
 * If Fast meet Slow, it means there exists an cycle
 */