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
		if (head == NULL)
			return false;

		ListNode *tmp1 = head->next;
		if (tmp1 == NULL)
			return false;
		ListNode *tmp2 = tmp1->next;

		while (tmp1 != NULL && tmp2 != NULL && tmp1 != tmp2) {
			if (tmp1->next != NULL)
				tmp1 = tmp1->next;
			else
				tmp1 = NULL;

			if (tmp2->next != NULL)
				if (tmp2->next->next != NULL)
					tmp2 = tmp2->next->next;
				else
					tmp2 = NULL;
			else
				tmp2 = NULL;
		}

		return tmp1 == tmp2;
	}
};