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

    ListNode* reverseK(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(k--) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    ListNode* getKth(ListNode* head, int k) {
        while(head && k--) {
            head = head->next;
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if(!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroup = dummy;

        while(true) {

            ListNode* kth = getKth(prevGroup, k);
            if(!kth) break;

            ListNode* groupNext = kth->next;

            ListNode* start = prevGroup->next;

            // break group
            kth->next = NULL;

            // reverse group
            prevGroup->next = reverseK(start, k);

            // connect tail
            start->next = groupNext;

            prevGroup = start;
        }

        return dummy->next;
    }
};