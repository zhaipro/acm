/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool _isSymmetric(struct TreeNode* l, struct TreeNode* r){
    if (r == 0 && l == 0) return true;
    if (r == 0 || l == 0) return false;
    if (r->val != l->val) {
        return false;
    }
    return _isSymmetric(l->left, r->right) && _isSymmetric(l->right, r->left);
}

bool isSymmetric(struct TreeNode* root){
    return _isSymmetric(root, root);
}
