/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        if(root==nullptr)   return ans;
        while(!q.empty())
        {
            int sz = q.size();
            ans++;
            bool check=false;
            for(int i=0;i<sz;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left==nullptr && curr->right==nullptr)
                {
                    check = true;
                    break;
                }
                if(curr->left)  q.push(curr->left);
                if(curr->right)  q.push(curr->right);
            }
            if(check )  break;
        }
        return ans;
    }
};