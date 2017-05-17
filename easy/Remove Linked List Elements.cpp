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
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL)
			return NULL;
		while (head != NULL && head->val == val)
			if (head->next != NULL)
				head = head->next;
			else
				head = NULL;

		ListNode* cur = head;
		while (cur != NULL) {
			while (cur->next != NULL && cur->next->val == val)
				if (cur->next->next != NULL)
					cur->next = cur->next->next;
				else
					cur->next = NULL;
			cur = cur->next;
		}
		return head;
	}
};