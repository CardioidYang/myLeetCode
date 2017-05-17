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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL && l2 == NULL)
			return NULL;
		else if (l1 != NULL && l2 == NULL)
			return l1;
		else if (l1 == NULL && l2 != NULL)
			return l2;


		ListNode* head, *cur, *pl1, *pl2;

		pl1 = l1;
		pl2 = l2;

		if (l1->val<l2->val) {
			head = l1;
			pl1 = (pl1->next == NULL) ? NULL : pl1->next;
		}
		else {
			head = l2;
			pl2 = (pl2->next == NULL) ? NULL : pl2->next;
		}

		cur = head;

		while (pl1 != NULL && pl2 != NULL) {
			if (pl1->val<pl2->val) {
				cur->next = pl1;
				pl1 = (pl1->next == NULL) ? NULL : pl1->next;
			}
			else {
				cur->next = pl2;
				pl2 = (pl2->next == NULL) ? NULL : pl2->next;
			}
			cur = cur->next;
		}

		if (pl1 == NULL)
			cur->next = pl2;
		else
			cur->next = pl1;

		return head;

	}
};