/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int _sumEvenGrandparent(struct TreeNode* root, int d){
    int r = 0;
    if(root == 0) {
        return 0;
    }
    d <<= 1;
    if(d & 4) {
        r += root->val;
    }
    if(root->val % 2 == 0) {
        d |= 1;
        d &= 3;
    }
    r += _sumEvenGrandparent(root->left, d);
    r += _sumEvenGrandparent(root->right, d);
    return r;
}
