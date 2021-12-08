/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mirrorTree(struct TreeNode* root){
    struct TreeNode *t;
    if (root == 0) return 0;
    t = root->left;
    root->left = root->right;
    root->right = t;
    mirrorTree(root->left);
    mirrorTree(root->right);
    return root;
}
