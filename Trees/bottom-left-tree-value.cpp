// https://leetcode.com/contest/leetcode-weekly-contest-19/problems/find-bottom-left-tree-value/

//APPROACH - Level Order Traversal 

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int leftVal = root->val;
        while(!q.empty()) {
            int n = q.size();
            leftVal = q.front()->val;
            for(int i = 0; i < n; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return leftVal;
    }
};
