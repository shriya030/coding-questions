// https://leetcode.com/contest/leetcode-weekly-contest-19/problems/find-largest-value-in-each-tree-row/

//APPROACH - Level Order Traversal 

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        int maxm = root->val;
        while(!q.empty()) {
            int n = q.size();
            int maxm = q.front()->val;
            while(n--) {
                TreeNode* temp = q.front();
                maxm = max(maxm, temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(maxm);
        }
        return ans;
    }
};
