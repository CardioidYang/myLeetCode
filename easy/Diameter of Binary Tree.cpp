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
	int depthCount(TreeNode* root, int &diameter) {
		if (root == NULL)
			return 0;

		int lDepth = depthCount(root->left, diameter);
		int rDepth = depthCount(root->right, diameter);

		if (lDepth + rDepth>diameter)
			diameter = lDepth + rDepth;

		return max(lDepth, rDepth) + 1;
	}
	int diameterOfBinaryTree(TreeNode* root) {
		int diameter = 0;
		depthCount(root, diameter);
		return diameter;
	}
};