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
	int minDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		int lDepth = minDepth(root->left);
		int rDepth = minDepth(root->right);

		if (lDepth == 0 && rDepth == 0)
			return 1;
		else if (lDepth == 0 && rDepth != 0)
			return rDepth + 1;
		else if (lDepth != 0 && rDepth == 0)
			return lDepth + 1;
		return min(rDepth, lDepth) + 1;
	}
};