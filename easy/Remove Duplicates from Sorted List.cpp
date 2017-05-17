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
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL)
			return NULL;
		ListNode* curNode = head;
		while (curNode->next != NULL) {
			if (curNode->val == curNode->next->val) {
				//delete next
				if (curNode->next->next != NULL)
					curNode->next = curNode->next->next;
				else {
					curNode->next = NULL;
					break;
				}
			}
			else {
				curNode = curNode->next;
			}
		}
		return head;
	}
};