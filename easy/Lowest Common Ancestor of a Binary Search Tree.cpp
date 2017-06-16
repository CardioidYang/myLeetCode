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

    vector<TreeNode*> findNodeWithRoutingPath(TreeNode* root, TreeNode* p) {
        TreeNode* cur=root;
        vector<TreeNode*> output;
        while(cur!=NULL) {
            output.push_back(cur);
            if(p->val<cur->val)
                cur=(cur->left==NULL)?NULL:cur->left;
            else if(p->val==cur->val)
                return output;
            else
                cur=(cur->right==NULL)?NULL:cur->right;
        }
        
        //not found this node;
        return output;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        
        vector<TreeNode*> tp, tq;
        
        tp=findNodeWithRoutingPath(root, p);
        tq=findNodeWithRoutingPath(root, q);
        
        int commonSize=min(tp.size(),tq.size());
        
        int found=-1;
        for(int i=0;i<commonSize;i++) {
            if(tp[i]->val==tq[i]->val)
                found=i;
        }
        
        return (found==-1)?NULL:tp[found];
    }
};