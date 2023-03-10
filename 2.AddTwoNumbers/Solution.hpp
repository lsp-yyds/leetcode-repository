//
// Created by bruce on 1/31/23.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode* next;

    ListNode()
        : val{0}
        , next{nullptr} {
    }
    ListNode(int x)
        : val{x}
        , next{nullptr} {
    }
    ListNode(int x, ListNode* next)
        : val{x}
        , next{next} {
    }
};

// Time Complexity: O(max(m, n));
class Solution {
  public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummyHead->next;
    }
};