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

	unordered_map<int, vector<int>> myBucket;
	int mytraversal(TreeNode* root, int level) {
		if (root == NULL)
			return level;
		myBucket[level].push_back(root->val);

		return max(mytraversal(root->right, level + 1), mytraversal(root->left, level + 1));
	}

	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		int maxLevel = mytraversal(root, 0);
		vector<vector<int>> myOutPut;
		int count = 0;
		for (int i = maxLevel - 1; i >= 0; i--) {
			myOutPut.push_back(myBucket[i]);
			count++;
		}
		return myOutPut;
	}
};