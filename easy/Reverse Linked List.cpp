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
	ListNode* reverseList(ListNode* head) {
		if (head == NULL)
			return NULL;
		ListNode *firstNode = head;
		ListNode *curNode = head;
		if (curNode->next == NULL)
			return head;
		ListNode *curNext = curNode->next;
		while (curNext != NULL) {
			ListNode *tmpNode;
			tmpNode = curNext->next;
			curNext->next = curNode;
			curNode = curNext;
			curNext = tmpNode;

		}
		firstNode->next = NULL;
		return curNode;
	}
};