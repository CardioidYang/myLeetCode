/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	bool isTreeSym(TreeNode* rr, TreeNode* ll) {
		if (!rr && !ll) return true;
		if ((!rr && ll) || (rr && !ll)) return false;
		if (ll == rr) return isTreeSym(rr->right, rr->left);
		if (ll->val != rr->val) return false;
		return isTreeSym(rr->left, ll->right) && isTreeSym(rr->right, ll->left);
	}
	bool isSymmetric(TreeNode* root) {
		return isTreeSym(root, root);
	}
};