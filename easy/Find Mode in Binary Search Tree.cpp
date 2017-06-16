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
    unordered_map<int, int> myMap;
    void putTreeToMap(TreeNode* root) {
        if(root!=NULL) {
            putTreeToMap(root->left);
            myMap[root->val]++;
            putTreeToMap(root->right);
        }
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> myOutput;
        if(root==NULL)
            return myOutput;
            
        putTreeToMap(root);
        
        int maxCount=0;
        for(unordered_map<int, int>::iterator it=myMap.begin();it!=myMap.end();it++) {
            if(it->second>maxCount)
                maxCount=it->second;
        }
        
        for(unordered_map<int, int>::iterator it=myMap.begin();it!=myMap.end();it++) {
            if(it->second==maxCount)
                myOutput.push_back(it->first);
        }
        return myOutput;
    }
};