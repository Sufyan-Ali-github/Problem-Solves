
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
ListNode* Solve(ListNode* list1, ListNode* list2) {
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;

    while (curr1 != nullptr && curr2 != nullptr) {
        if (curr1->val <= curr2->val) {
            // Move curr1 to the end of its current segment
            while (curr1->next != nullptr && curr1->next->val <= curr2->val) {
                curr1 = curr1->next;
            }
            // Insert curr2 into the list starting with list1
            ListNode* temp = curr1->next;
            curr1->next = curr2;
            curr1 = temp; // move curr1 forward
        } else {
            // Move curr2 to the end of its current segment
            while (curr2->next != nullptr && curr2->next->val < curr1->val) {
                curr2 = curr2->next;
            }
            // Insert curr1 into the list starting with list2
            ListNode* temp = curr2->next;
            curr2->next = curr1;
            curr2 = temp; // move curr2 forward
        }
    }

    return list1;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        if (list1->val <= list2->val) {
            return Solve(list1, list2);
        } else {
            return Solve(list2, list1);
        }
    }
};
