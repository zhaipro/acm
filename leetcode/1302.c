/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int _deepestLeavesSum(struct TreeNode* root, int *pd){
    int ld = 0, rd = 0, lr, rr;
    if(root->left == 0 && root->right == 0) {
        return root->val;
    }
    if(root->left) {
        ld = *pd + 1;
        lr = _deepestLeavesSum(root->left, &ld);
    }
    if(root->right) {
        rd = *pd + 1;
        rr = _deepestLeavesSum(root->right, &rd);
    }
    if(ld < rd) {
        *pd = rd;
        return rr;
    } else if(ld > rd) {
        *pd = ld;
        return lr;
    } else {
        *pd = ld;
        return lr + rr;
    }
}

int deepestLeavesSum(struct TreeNode* root){
    int d = 0;
    return _deepestLeavesSum(root, &d);
}
