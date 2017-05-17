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
	void traceLDR(vector<int> &output, TreeNode* node) {
		if (node != NULL) {
			if (node->left != NULL) {
				traceLDR(output, node->left);
			}
			output.push_back(node->val);
			if (node->right != NULL) {
				traceLDR(output, node->right);
			}
		}
	}
	int getMinimumDifference(TreeNode* root) {
		vector<int> mySortedNum;
		traceLDR(mySortedNum, root);

		int g_min = INT_MAX;
		for (int i = 0; i<mySortedNum.size() - 1; i++) {
			int tmp = abs(mySortedNum[i] - mySortedNum[i + 1]);
			if (tmp<g_min) {
				g_min = tmp;
			}
		}
		return g_min;
	}
};