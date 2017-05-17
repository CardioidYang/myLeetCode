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
	bool hasPathSum(TreeNode* root, int sum) {
		if (root == NULL)
			return false;

		if (root->left == NULL && root->right == NULL)
			return sum == root->val;

		bool leftHas = false, rightHas = false;
		if (root->left != NULL)
			leftHas = hasPathSum(root->left, sum - root->val);

		if (root->right != NULL)
			rightHas = hasPathSum(root->right, sum - root->val);

		return leftHas || rightHas;
	}
};