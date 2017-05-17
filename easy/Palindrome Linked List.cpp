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
	ListNode* tmp;
	bool isPalindrome(ListNode* head) {
		tmp = head;
		return check(head);
	}
	bool check(ListNode* p) {
		if (p == NULL)
			return true;
		bool ret = (check(p->next) & (tmp->val == p->val));
		tmp = tmp->next;
		return ret;
	}
};