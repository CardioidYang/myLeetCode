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

    int mybTP(TreeNode* root, vector<int> &myUpTrace, vector<string> &output) {
        if(root==NULL) 
            return -1;
        
        myUpTrace.push_back(root->val);
        if(root->left==NULL && root->right==NULL) {
            string thisLeaf="";
            for(int i=0;i<myUpTrace.size();i++) {
                thisLeaf+=to_string(myUpTrace[i]);
                if(i!=myUpTrace.size()-1) {
                    thisLeaf+="->";
                }
            }
            output.push_back(thisLeaf);
            return 0;
        }
        
        vector<int> lPath(myUpTrace.begin(),myUpTrace.end());
        vector<int> rPath(myUpTrace.begin(),myUpTrace.end());
        
        
        mybTP(root->left, lPath, output);
        mybTP(root->right, rPath, output);
        
        return 0;
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> myTrace;
        vector<string> output;
        mybTP(root, myTrace, output);
        return output;
    }
};