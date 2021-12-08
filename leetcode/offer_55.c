/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if (root == 0) return 0;
    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
}
