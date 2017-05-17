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
	int maxDepth(TreeNode* root) {
		if (root == NULL) {
			return 0;
		}

		if (root->left == NULL && root->right == NULL) {
			return 1;
		}

		int leftCount = 0;
		int rightCount = 0;

		if (root->left != NULL) {
			leftCount = maxDepth(root->left) + 1;
		}

		if (root->right != NULL) {
			rightCount = maxDepth(root->right) + 1;
		}

		return leftCount>rightCount ? leftCount : rightCount;
	}
};