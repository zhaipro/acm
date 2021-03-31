/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int rangeSumBST(struct TreeNode* root, int low, int high){
    int r = 0;
    if(root == 0) return r;
    if(low <= root->val && root->val <= high) {
        r += root->val;
    }
    r += rangeSumBST(root->left, low, high);
    r += rangeSumBST(root->right, low, high);
    return r;
}
