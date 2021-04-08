/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int func(struct TreeNode* root, int l){
    int r = 0;
    if(root->left == 0 && root->right == 0) {
        return root->val * l;
    }
    if(root->left) {
        r += func(root->left, 1);
    }
    if(root->right) {
        r += func(root->right, 0);
    }
    return r;
}

int sumOfLeftLeaves(struct TreeNode* root){
    return root?func(root, 0):0;
}
