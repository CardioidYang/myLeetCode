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

	int mySums(TreeNode* root, int sum, int preValue) {
		if (!root)
			return 0;
		int curValue = preValue + root->val;
		return (curValue == sum) + mySums(root->right, sum, curValue) + mySums(root->left, sum, curValue);
	}
	int pathSum(TreeNode* root, int sum) {
		if (!root)
			return 0;
		return mySums(root, sum, 0) + pathSum(root->right, sum) + pathSum(root->left, sum);
	}
};