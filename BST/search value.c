/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    struct TreeNode* ans = NULL;
    if(root == NULL)
        return NULL;
    if(root->val == val)
        ans =root;
    else
    {
        if(root->val < val) {
            ans = searchBST(root->right, val);
        } else {
            ans = searchBST(root->left, val);
        }
    }
    return ans;
}