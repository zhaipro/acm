/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int targetSum){
    if(root == 0) {
        return false;
    }
    if(root->left == 0 && root->right == 0) {
        return root->val == targetSum;
    }
    if(root->left && hasPathSum(root->left, targetSum - root->val)) {
        return true;
    }
    if(root->right && hasPathSum(root->right, targetSum - root->val)) {
        return true;
    }
    return false;
}
