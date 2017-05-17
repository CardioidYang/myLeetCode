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

	TreeNode* arrayToBST(vector<int>& nums, int start, int end) {
		if (end <= start)
			return NULL;

		int midPoint = (start + end) / 2;
		TreeNode* root = new TreeNode(nums[midPoint]);

		root->left = arrayToBST(nums, start, midPoint);
		root->right = arrayToBST(nums, midPoint + 1, end);
		return root;
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return arrayToBST(nums, 0, nums.size());
	}
};