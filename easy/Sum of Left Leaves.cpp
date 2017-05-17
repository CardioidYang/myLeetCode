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
	int traceLDFandCount(bool isLeftSide, TreeNode* root) {
		if (root == NULL) {
			return 0;
		}
		if (root->left == NULL && root->right == NULL) {
			return isLeftSide ? root->val : 0;
		}
		int lCount = 0, rCount = 0;
		if (root->left != NULL) {
			lCount = traceLDFandCount(true, root->left);
		}
		if (root->right != NULL) {
			rCount = traceLDFandCount(false, root->right);
		}
		return lCount + rCount;
	}
	int sumOfLeftLeaves(TreeNode* root) {
		if (root == NULL) {
			return 0;
		}
		int leftCount = traceLDFandCount(true, root->left);
		int rightCount = traceLDFandCount(false, root->right);
		return leftCount + rightCount;
	}
};