class Solution {
public:
    bool isMirror(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr) return true;
        else if (a == nullptr || b == nullptr) return false;
        else if (a->val != b->val) return false;
        return isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return isMirror(root->left, root->right);
    }
};
