//https://leetcode.com/problems/binary-tree-inorder-traversal/solutions/
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
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) return {};
        vector<int> ans;
        ans = inorderTraversal(root->left);
        ans.push_back(root->val);
        vector<int> temp = inorderTraversal(root->right);

        for(auto i: temp) ans.push_back(i);
        return ans;
    }
};