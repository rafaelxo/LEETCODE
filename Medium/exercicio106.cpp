class Solution {
public:
    unordered_map<int, int> inMap;
    int idx;
    
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int left, int right) {
        if (left > right) return nullptr;
        int rootVal = postorder[idx--];
        TreeNode* root = new TreeNode(rootVal);
        int mid = inMap[rootVal];
        root->right = build(inorder, postorder, mid + 1, right);
        root->left = build(inorder, postorder, left, mid - 1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx = postorder.size() - 1;
        for (int i = 0; i < inorder.size(); i++) inMap[inorder[i]] = i;
        return build(inorder, postorder, 0, inorder.size() - 1);
    }
};
