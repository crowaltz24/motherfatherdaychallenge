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
    bool hasPathSum(TreeNode* root, int tgt) {
        if (!root) return false;

        if (!root->left && !root->right) {
            return tgt - root->val == 0;
        }

        tgt -= root->val;

        if (hasPathSum(root->left, tgt) || hasPathSum(root->right, tgt)) {
            return true;
        } else return false;
    }
};